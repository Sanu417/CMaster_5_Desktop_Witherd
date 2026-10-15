#include "DxLib.h"
#include "Sound.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	SetWindowText("Sound");

	SetGraphMode(CSound::SCREEN_WIDTH, CSound::SCREEN_HEIGHT, CSound::COLOR_BIT_DEPTH);
	ChangeWindowMode(TRUE);

	if (DxLib_Init() == -1)return -1;

	SetBackgroundColor(0, 0, 0);
	SetDrawScreen(DX_SCREEN_BACK);

	{
		CSound Ssound{};

		if (Ssound.Init() == false) {
			DxLib_End(); return -1;
		}

		while (1) {
			ClearDrawScreen();
			Ssound.Update();
			Ssound.Draw();

			ScreenFlip();
			WaitTimer(33);

			if (ProcessMessage() == -1) {
				break;
			}

			if (CheckHitKey(KEY_INPUT_ESCAPE) == 1) {
				break;
			}
		}
	}//deathtract


	DxLib_End();
	return 0;
}