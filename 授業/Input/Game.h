#pragma once

class CGame {

public:
	static constexpr int SCREEN_WIDTH = 960;
	static constexpr int SCREEN_HEIGHT = 640;
	static constexpr int COLOR_BIT_DEPTH = 32;

	void Update();

	void Draw() const;

private:
	int m_LeftKey{};
	int m_RightKey{};
	int m_UpKey{};
	int m_DownKey{};

	int m_MouseX{};
	int m_MouseY{};

	int m_MouseInput{};
};