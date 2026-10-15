#include "Game.h"
#include "DxLib.h"

void CGame::Update() {
	m_LeftKey = CheckHitKey(KEY_INPUT_LEFT);
	m_RightKey = CheckHitKey(KEY_INPUT_RIGHT);
	m_UpKey = CheckHitKey(KEY_INPUT_UP);
	m_DownKey = CheckHitKey(KEY_INPUT_DOWN);

	GetMousePoint(&m_MouseX, &m_MouseY);

	m_MouseInput = GetMouseInput();

}

void CGame::Draw() const {
	const int WHITE = GetColor(255, 255, 255);

	DrawFormatString(0, 0, WHITE, "LEFT %d", m_LeftKey);
	DrawFormatString(0, 20, WHITE, "RIGHT %d", m_RightKey);
	DrawFormatString(0, 40, WHITE, "UP %d", m_UpKey);
	DrawFormatString(0, 60, WHITE, "DOWN %d", m_DownKey);
	
	DrawFormatString(0, 100, WHITE, "MouseX %d", m_MouseX);
	DrawFormatString(0, 120, WHITE, "MouseY %d", m_MouseY);

	DrawFormatString(0, 160, WHITE, "MouseInput %d", m_MouseInput);
}