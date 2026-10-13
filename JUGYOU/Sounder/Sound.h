#pragma once

class CSound {

public:
	static constexpr int SCREEN_WIDTH = 980;
	static constexpr int SCREEN_HEIGHT = 640;
	static constexpr int COLOR_BIT_DEPTH = 32;

	[[ondiscard]]
	bool Init();

	void Update();

	void Draw() const;

	~CSound();

private:
	int m_Timer{};

	int m_Bgm{ -1 };
	int m_Se{ -1 };

};