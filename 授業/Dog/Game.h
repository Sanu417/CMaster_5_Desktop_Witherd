#pragma once

#include "Dog.h"

class CGame {
public :
	static constexpr int SCREEN_WIDTH = 980;
	static constexpr int SCREEN_HEIGHT = 640;
	static constexpr int COLOR_BIT_DEPTH = 32;

	[[nodiscard]]
	bool Init();

	void Update();
	void Draw() const;

	~CGame();

private:
	int m_BackgroundImage{ -1 };

	CDog m_Dog{};
};