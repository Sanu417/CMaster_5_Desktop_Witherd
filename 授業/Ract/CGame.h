#pragma once
#include "Rect.h"

class CGame {
public:
	static constexpr int SCREEN_WIDTH = 960;
	static constexpr int SCREEN_HEIGHT = 640;
	static constexpr int COLOR_BIT_DEPTH = 32;

	CGame();

	void Update(); void Draw() const;

private:
	CRect m_Rect1{};
	CRect m_Rect2{};

	int m_DistanceX{};
	int m_DistanceY{};
};