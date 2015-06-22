#include "ManagementTitle.h"
#include "Application.h"
extern std::unique_ptr<Application> pApp;

ManagementTitle::ManagementTitle()
{
}


ManagementTitle::~ManagementTitle()
{
}


void ManagementTitle::PushKeyState(AppController::eGetController pushKey){
	//コントローラー入力処理を記述
}

void ManagementTitle::PushKeyState(){
	
	WaitKey();
	pApp->m_pAppData->IsUpData(true);
}