#include "Application.h"
#include "FrameRate.h"
FrameRate frameRate(60);
Application::Application(){

	m_pAppData = std::make_unique<AppData>();
	m_pAppManager = std::make_unique<AppManager>();
	m_pController = std::make_unique<AppController>();

}


Application::~Application()
{
}

void Application::AppMain(){

//	m_pController->m_PadInput();

	if (m_pAppData->AppUpDataFlg()){
		m_pAppManager->AppUpData();
		m_pAppData->IsUpData(false);
	}

	m_pAppManager->AppRender();
	m_pAppManager->AppProc();
	frameRate.GetFrameRate();
}

