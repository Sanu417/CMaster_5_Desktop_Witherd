#include "Circle.h"
#include "DxLib.h"

void CCircle::SetPos(int x,int y) {
	m_X = x;
	m_Y = y;
}

void CCircle::SetRadius(int radius) {
	m_Radius = radius;
}
void CCircle::SetColor(int color) {
	m_Color = color;
}
int CCircle::GetX()const {
	return m_X;
}
int CCircle::GetY()const {
	return m_X;
}

int CCircle::GetRadius()const {
	return m_Radius;
}

void CCircle::Draw() const {
	DrawCircle(m_X, m_Y, m_Radius, m_Color, TRUE);
}