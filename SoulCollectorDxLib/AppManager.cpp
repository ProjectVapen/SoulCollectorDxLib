#include "AppManager.h"


AppManager::AppManager()
{
	m_pManageBattle = nullptr;
	m_pManagScene = std::make_unique<ManagementScene>();
}


AppManager::~AppManager()
{
}

void AppManager::UpData(){

	m_pManagScene->ChangeScene();
	switch (m_pManagScene->NowScene()){
	case DataScene::eScene::eTitle:
		m_pManagScene->NextScene(DataScene::eScene::eStart);
		break;
	case DataScene::eScene::eStart:
		m_pManagScene->NextScene(DataScene::eScene::eBattle);
		break;
	case DataScene::eScene::eBattle:
		m_pManageBattle = std::make_unique<ManagementBattle>();
		m_pManagScene->NextScene(DataScene::eScene::eResult);
		break;

	case DataScene::eScene::eResult:
		m_pManagScene->NextScene(DataScene::eScene::eStart);
		break;

	case DataScene::eScene::eNone:
		m_pManagScene->NextScene(DataScene::eScene::eTitle);
		break;


	}
}