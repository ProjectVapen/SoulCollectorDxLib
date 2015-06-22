#include "Application.h"


Application::Application(){

	m_pWindow     = std::make_unique<Window>(1280,720);
	m_pAppData	  = std::make_unique<AppData>();
	m_pAppManager = std::make_unique<AppManager>();
	m_pController = std::make_unique<AppController>();

}


Application::~Application()
{
}

void Application::AppMain(){


	if (m_pAppData->AppUpDataFlg()){
		m_pAppManager->AppUpData();
		m_pAppData->IsUpData(false);
	}
	

	m_pAppManager->AppRender();
	m_pAppManager->AppProc();
	
	
}

