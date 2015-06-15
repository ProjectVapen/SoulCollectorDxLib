#pragma once
/*
	�����̃��C�����[�v��



*/
#include "AppManager.h"
#include "AppData.h"
#include "AppController.h"

#include "Include.h"

class Application
{
	private:
		
	public:

		std::unique_ptr<AppManager> m_pAppManager;
		std::unique_ptr<AppData>	m_pAppData;
		std::unique_ptr<AppController>m_pController;

		Application();
		~Application();

		void AppMain();	//���ۂ̃��C�����֐�

};