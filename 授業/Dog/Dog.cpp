#include "Dog.h"
#include "DxLib.h"

bool CDog::Init() {

	m_Images[0] = LoadGraph("image/dog0.png");
	m_Images[1] = LoadGraph("image/dog1.png");
	m_Images[2] = LoadGraph("image/dog2.png");
	m_Images[3] = LoadGraph("image/dog3.png");

	for (const int image : m_Images) {
		if (image == -1) return false;
		return true;
	}
}

void CDog::Update(const int screenWidth) {
	m_X += MOVE_SPEED;
	if (m_X > screenWidth) {
		m_X = RETURN_X;
	}

	++m_Timer;
}



void CDog::Draw() const {
	size_t imageIndex =
		static_cast<std::size_t>(m_Timer / ANIMATION_INTERVAL) % IMAGE_NUM;

	DrawGraph(m_X,m_Y,m_Images[imageIndex],TRUE);
}

CDog::~CDog() {
	for (const int image : m_Images) {
		if (image != -1) {
			DeleteGraph(image);
		}
	}
}