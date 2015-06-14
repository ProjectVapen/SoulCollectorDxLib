#pragma once
#include "AppManager.h"
#include "AppData.h"
#include "AppController.h"

#include <memory>

class Application
{
	private:
		std::unique_ptr<AppManager> m_pAppManager;
		std::unique_ptr<AppData>	m_pAppData;
		std::unique_ptr<AppController>m_pController;
	public:
		Application();
		~Application();



		void AppMain();
};

