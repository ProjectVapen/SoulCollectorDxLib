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


}