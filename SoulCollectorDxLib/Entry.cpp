#include "Entry.h"
#include "DxLib.h"

Entry::Entry()
{
}


Entry::~Entry()
{
}

Entry entry;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{

	entry.m_pWindow = std::make_unique<Window>(1280,720);
	entry.m_pApp = std::make_unique<Application>();

	
	
	ChangeWindowMode(TRUE),	
	SetGraphMode(entry.m_pWindow->GetWindowWidth(), entry.m_pWindow->GetWidowHeight(), 32);	
	SetDrawScreen(DX_SCREEN_BACK);

	if (DxLib_Init() == -1)    // ＤＸライブラリ初期化処理
	{
		return -1;
	}
	while (ScreenFlip() == 0 && ProcessMessage() == 0 &&
		ClearDrawScreen() == 0)
	{
		entry.m_pApp->AppMain();
	}


	return 0;        // ソフトの終了
}