#include "ManagementTitle.h"
#include "Entry.h"
extern Entry entry;

ManagementTitle::ManagementTitle()
{
}


ManagementTitle::~ManagementTitle()
{
}


void ManagementTitle::Proc(AppController::eGetController pushKey){
	//コントローラー入力処理を記述
	WaitKey();
	entry.m_pApp->m_pAppData->IsUpData(true);
}