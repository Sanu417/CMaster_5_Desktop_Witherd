#include "Rect.h"

#include "DxLib.h"

void CRect::SetPos(int x, int y) {
	m_X = x; m_Y = y;
}
void CRect::SetSize(int width, int height) {
	m_Width = width; m_Height = height;
}
void CRect::SetColor(int color) {
	m_Color = color;
}
int CRect::GetX() const { return m_X; }
int CRect::GetY() const { return m_Y; }

int CRect::GetWidth() const { return m_Width; }
int CRect::GetHeight() const { return m_Height; }

void CRect::Draw() const {
	DrawBox(m_X - m_Width / 2, m_Y - m_Height / 2,
		m_X + m_Width / 2, m_Y + m_Height / 2,
		m_Color, TRUE);
}