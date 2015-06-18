#include "ManagementStart.h"
#include "Entry.h"
extern Entry entry;
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
	entry.m_pApp->m_pAppData->IsUpData(true);
}