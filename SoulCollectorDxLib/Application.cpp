#include "Application.h"


Application::Application(){

	m_pAppData = std::make_unique<AppData>();
	m_pAppManager = std::make_unique<AppManager>();
	m_pController = std::make_unique<AppController>();

}


Application::~Application()
{
}

void Application::AppMain(){
	
	if (m_pAppData->CanUpData()){
		UpData();
		m_pAppData->IsStopUpData(false);
	}
	

}



void Application::UpData(){
	//	�V�[����؂�ւ���Ƃ��Ȃ񂩂��炠�������̍X�V����	//
}