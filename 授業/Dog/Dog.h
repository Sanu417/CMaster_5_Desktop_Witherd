#pragma once

#include <array>
#include <cstddef>

class CDog {
public:
	[[nodiscard]]
	bool Init();

	void Update(int screenWidth);
	void Draw() const;

	~CDog();

private:
	static constexpr std::size_t IMAGE_NUM = 4;
	static constexpr int ANIMATION_INTERVAL = 5;
	static constexpr int MOVE_SPEED = 10;
	static constexpr int RETURN_X = -200;

	std::array<int, IMAGE_NUM> m_Images{};

	int m_X{};
	int m_Y{ 400 };
	int m_Timer{};


};