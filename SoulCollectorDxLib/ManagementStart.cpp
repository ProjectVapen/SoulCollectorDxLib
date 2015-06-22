#include "ManagementStart.h"
#include "Application.h"
extern std::unique_ptr<Application> pApp;
ManagementStart::ManagementStart()
{
}


ManagementStart::~ManagementStart()
{
}

void ManagementStart::PushKeyState(AppController::eGetController pushKey){
	//コントローラー入力処理を記述
	
}

void ManagementStart::PushKeyState(){
	WaitKey();
	pApp->m_pAppData->IsUpData(true);
}