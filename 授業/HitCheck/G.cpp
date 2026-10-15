#include "G.h"
#include"Dxlib.h"

#include <cmath>

CGame::CGame() {
	m_Circle1.SetPos(0, 0);
	m_Circle1.SetRadius(80);

	m_Circle2.SetPos(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
	m_Circle2.SetRadius(120);
}

void CGame::Update() {
	int mouseX{}; int mouseY{};
	GetMousePoint(&mouseX, &mouseY);
	//m_Rect1.setPos(mouseX, mouseY);

	int col1 = GetColor(255, 0, 0);
	int col2 = GetColor(0, 0, 255);

	int dx = m_Circle1.GetX() - m_Circle2.GetX();
	int dy = m_Circle1.GetY() - m_Circle2.GetY();

	m_Distance = static_cast<int>(
		std::sqrt(dx * dx + dy * dy)
		);

	if (m_Distance <= m_Circle1.GetRadius() + m_Circle2.GetRadius()) {
		col1 = GetColor(255, 255, 0); col2 = GetColor(0, 255, 255);
	}

	m_Circle1.SetColor(col1); m_Circle2.SetColor(col2);
}

void CGame::Draw()const{
	const int WHITE = GetColor(255, 255, 255);

	DrawFormatString(0, 0, WHITE, "’†SŠÔ‹——£ %d", m_Distance);

	m_Circle1.Draw();
	m_Circle2.Draw();
}