#pragma once

class CRect
{
public:
	void SetPos(int x, int y);

	void SetSize(int Width, int Height);

	void SetColor(int color);

	[[nodiscard]] int GetX() const;
	[[nodiscard]] int GetY() const;
	[[nodiscard]] int GetWidth() const;
	[[nodiscard]] int GetHeight() const;

	void Draw() const;

private:
	int m_X{};
	int m_Y{};
	int m_Width{};
	int m_Height{};
	int m_Color{};
};