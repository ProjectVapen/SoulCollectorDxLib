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
	//�R���g���[���[���͏������L�q
	WaitKey();
	entry.m_pApp->m_pAppData->IsUpData(true);
}