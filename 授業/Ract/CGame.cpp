#include "CGame.h"

#include "DxLib.h"
#include <cstdlib>
CGame::CGame() {
	m_Rect1.SetPos(0, 0);
	m_Rect1.SetSize(120, 80);

	m_Rect2.SetPos(SCREEN_WIDTH/2, SCREEN_HEIGHT/2);
	m_Rect2.SetSize(120, 80);
}

void CGame::Update() {
	int mouseX{};
	int mouseY{};

	GetMousePoint(&mouseX,&mouseY);

	m_Rect1.SetPos(mouseX, mouseY);

	int col1 = GetColor(255,0,0);
	int col2 = GetColor(0,0,255);

	m_DistanceX = std::abs(m_Rect1.GetX() - m_Rect2.GetX());
	m_DistanceY = std::abs(m_Rect1.GetY() - m_Rect2.GetY());

	if (
		m_DistanceX<=(m_Rect1.GetWidth()+m_Rect2.GetWidth())/2 &&
		m_DistanceY <= (m_Rect1.GetHeight() + m_Rect2.GetHeight()) / 2
		) {

		col1 = GetColor(255, 255, 0); col2 = GetColor(0, 255, 255);

	}

	m_Rect1.SetColor(col1);
	m_Rect2.SetColor(col2);
}

void CGame::Draw() const{

	m_Rect1.Draw();
	m_Rect2.Draw();
}