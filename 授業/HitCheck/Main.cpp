#include "DxLib.h"
#include "G.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	SetWindowText("HitCheck");
	SetGraphMode(CGame::SCREEN_WIDTH, CGame::SCREEN_HEIGHT, CGame::COLOR_BIT_DEPTH);
	ChangeWindowMode(TRUE);

	if (DxLib_Init() == -1) return -1;

	SetBackgroundColor(0, 0, 0);
	SetDrawScreen(DX_SCREEN_BACK);

	{
		CGame game{};
		while (1) {
			ClearDrawScreen();

			game.Update(); game.Draw();

			ScreenFlip(); WaitTimer(33);

			if (ProcessMessage() == -1)break;
			if (CheckHitKey(KEY_INPUT_ESCAPE))break;
		}
	}

	DxLib_End();

	return 0;
}