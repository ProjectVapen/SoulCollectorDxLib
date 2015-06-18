#include "ManagementTitle.h"
#include "Entry.h"
extern Entry entry;

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
	entry.m_pApp->m_pAppData->IsUpData(true);
}