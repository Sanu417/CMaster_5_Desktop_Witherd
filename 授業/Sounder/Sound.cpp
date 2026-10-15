#include "Sound.h"
#include "DxLib.h"

bool CSound::Init() {
	m_Bgm = LoadSoundMem("sound/battle.mp3");
	m_Se = LoadSoundMem("sound/recover.mp3");

	if (m_Bgm == -1 || m_Se == -1) return false;

	ChangeVolumeSoundMem(128, m_Bgm);
	PlaySoundMem(m_Bgm, DX_PLAYTYPE_LOOP);

	return true;
}

void CSound::Update() {
	m_Timer++;

	if (CheckHitKey(KEY_INPUT_S)) {
		StopSoundMem(m_Bgm);
	}
	if (CheckHitKey(KEY_INPUT_SPACE)) {
		StopSoundMem(m_Se,DX_PLAYTYPE_BACK);
	}
}

void CSound::Draw()const {
	const int WHITE = GetColor(255, 255, 255);

	DrawFormatString(0,0,WHITE,"%d",m_Timer);

	DrawString(0, 20, "");
	DrawString(0, 20, "");
}

void CSound::~CSound() {

}