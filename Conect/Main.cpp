#include "DxLib.h"
#include "Main.h"


void MAIN::Main() {

	Draw();
}

void MAIN::Draw() {

	MAIN main;


	for (int i = 0; i < num_x;) {
		for (int j = 0; j < num_y;) {
			int a = main.Init_board[i][j];
			// •¶Žš—ñ‚Ì•`‰æ
			DrawFormatString(30*(j+1), 30*(i+1),GetColor(255,255,255),"%d", a);
			j++;

		}
		i++;
	}
}