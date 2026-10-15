#pragma once

class CCircle {
public:

	void SetPos(int x, int y);

	void SetRadius(int radius);

	void SetColor(int color);

	[[nodiscard]] int GetX() const;
	[[nodiscard]] int GetY() const;

	[[nodiscard]] int GetRadius() const;

	void Draw() const;

private:
	int m_X{};
	int m_Y{};
	int m_Radius{};
	int m_Color{}  ;
};