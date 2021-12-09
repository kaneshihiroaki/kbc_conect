#include "DxLib.h"
#include"Main.h"

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	
	SetGraphMode(800, 600, 32);	// 画面サイズ設定
	ChangeWindowMode(TRUE);     // ウィンドウモードに変更
	

	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}

	// 描画先画面を裏にする
	SetDrawScreen(DX_SCREEN_BACK);

	int x = 0;


	MAIN main;

	
		// 画面を初期化
		ClearDrawScreen();


		main.Main();	//メインゲーム処理
		

		ScreenFlip();			// 裏画面の内容を表画面に反映します
	
		WaitKey();

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}