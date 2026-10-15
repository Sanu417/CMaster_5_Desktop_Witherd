#pragma once
#include "Circle.h"

class CGame {
public:
	static constexpr int SCREEN_WIDTH = 960;
	static constexpr int SCREEN_HEIGHT = 640;
	static constexpr int COLOR_BIT_DEPTH = 32;

	CGame();

	void Update();
	void Draw() const;

private:
	CCircle m_Circle1{};
	CCircle m_Circle2{};

	int m_Distance{};
};