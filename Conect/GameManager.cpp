#include "DxLib.h"
#include"Main.h"

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	
	SetGraphMode(800, 600, 32);	// ��ʃT�C�Y�ݒ�
	ChangeWindowMode(TRUE);     // �E�B���h�E���[�h�ɕύX
	

	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}

	// �`����ʂ𗠂ɂ���
	SetDrawScreen(DX_SCREEN_BACK);

	int x = 0;


	MAIN main;

	
		// ��ʂ�������
		ClearDrawScreen();


		main.Main();	//���C���Q�[������
		

		ScreenFlip();			// ����ʂ̓��e��\��ʂɔ��f���܂�
	
		WaitKey();

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}