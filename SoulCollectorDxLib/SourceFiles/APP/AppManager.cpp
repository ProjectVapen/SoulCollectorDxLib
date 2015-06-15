#include "AppManager.h"


AppManager::AppManager()
{
	m_pManageBattle = nullptr;
	m_pManagScene = std::make_unique<ManagementScene>();
}


AppManager::~AppManager(){
}

void AppManager::UpData(){
	m_pManagScene->UpData();
}

void AppManager::Render(){
	m_pManagScene->Render();
}