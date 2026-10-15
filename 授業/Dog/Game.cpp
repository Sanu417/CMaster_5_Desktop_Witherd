#include "Game.h"
#include "DxLib.h"

bool CGame::Init() {
	m_BackgroundImage = LoadGraph("image/bg.png");

	if (m_BackgroundImage == -1) return false;
	
	if (!m_Dog.Init()) {
		return false;
	}

	return true;

}

void CGame::Update() {
	m_Dog.Update(SCREEN_WIDTH);
}

void CGame::Draw() const {
	DrawGraph(0, 0, m_BackgroundImage, FALSE);
	m_Dog.Draw();
}

 CGame::~CGame() {
	if (m_BackgroundImage != -1) {
		DeleteGraph(m_BackgroundImage);
	}
}