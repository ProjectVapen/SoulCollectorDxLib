#include "Entry.h"
#include "DxLib.h"
#include "Application.h"
Entry::Entry()
{
}


Entry::~Entry()
{
}

//ゲームのインスタンス化
std::unique_ptr<Application> pApp = std::make_unique<Application>();

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	Entry entry;
	

	
	
	ChangeWindowMode(TRUE),	
	SetGraphMode(pApp->m_pWindow->GetWindowWidth(), pApp->m_pWindow->GetWidowHeight(), 32);	
	SetDrawScreen(DX_SCREEN_BACK);

	if (DxLib_Init() == -1)    // ＤＸライブラリ初期化処理
	{
		return -1;
	}
	while (ScreenFlip() == 0 && ProcessMessage() == 0 &&
		ClearDrawScreen() == 0)
	{
		pApp->AppMain();
	}


	return 0;        // ソフトの終了
}