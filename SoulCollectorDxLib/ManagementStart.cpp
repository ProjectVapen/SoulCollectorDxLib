#include "ManagementStart.h"
#include "Entry.h"
extern Entry entry;
ManagementStart::ManagementStart()
{
}


ManagementStart::~ManagementStart()
{
}

void ManagementStart::Proc(AppController::eGetController pushKey){
	//�R���g���[���[���͏������L�q
	WaitKey();
	entry.m_pApp->m_pAppData->IsUpData(true);
}