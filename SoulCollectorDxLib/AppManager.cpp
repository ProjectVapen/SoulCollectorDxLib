#include "AppManager.h"


AppManager::AppManager()
{
	m_pManageBattle = nullptr;
	m_pManagScene = std::make_unique<ManagementScene>();
}


AppManager::~AppManager()
{
}
