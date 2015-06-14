#pragma once
#include "ManagementBattle.h"
#include "ManagementScene.h"
#include <memory>
class AppManager
{
	public:
		AppManager();
		~AppManager();

		std::unique_ptr<ManagementBattle> m_pManageBattle;
		std::unique_ptr<ManagementScene>  m_pManagScene;
};

