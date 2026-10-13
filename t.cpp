#include "DxLib.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	// DXライブラリーの初期化、エラーが起きたら終了
	if (DxLib_Init() == -1)return -1;

	// 青い円を描く( R G B , 0x←16進数 00 00 ff )
	DrawCircle(320, 240, 100, 0x0000ff);

	// キー入力があるまで待つ
	WaitKey();

	// DXライブラリーの終了処理
	DxLib_End();

	// WinMain()の終了処理
	return 0;

}