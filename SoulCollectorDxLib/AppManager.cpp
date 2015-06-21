#include "AppManager.h"
#include "Entry.h"

extern Entry entry;

AppManager::AppManager()
{
	m_pManageBattle = nullptr;
	m_pManagStart = nullptr;
	m_pManagTitle = nullptr;
	m_pManagScene = std::make_unique<ManagementScene>();
}


AppManager::~AppManager(){
}

void AppManager::AppUpData(){

	m_pManagScene->UpData();

	switch (m_pManagScene->NowScene()){

	case DataScene::eScene::eTITLE:
		m_pManagTitle = std::make_unique<ManagementTitle>();
		break;

	case DataScene::eScene::eSTART:
		m_pManagStart = std::make_unique<ManagementStart>();
		break;

	case DataScene::eScene::eBATTLE:
		m_pManageBattle = std::make_unique<ManagementBattle>();
		break;

	case DataScene::eScene::eRESULT:
		break;

	case DataScene::eScene::eNULL:
		break;
	}
}

void AppManager::AppRender(){
	
	m_pManagScene->Render();
	
}

void AppManager::AppProc(){

	switch(m_pManagScene->NowScene()){

	case DataScene::eScene::eTITLE:
		//m_pManagTitle->PushKeyState(entry.m_pApp->m_pController->m_PadInput());
		m_pManagTitle->PushKeyState();
		break;

	case DataScene::eScene::eSTART:
		//m_pManagStart->PushKeyState(entry.m_pApp->m_pController->m_PadInput());
		m_pManagStart->PushKeyState();
		break;

	case DataScene::eScene::eBATTLE:
		m_pManageBattle = std::make_unique<ManagementBattle>();
		m_pManageBattle->Draw();
		m_pManageBattle->PushKeyState();
		
		break;

	case DataScene::eScene::eRESULT:
		break;

	case DataScene::eScene::eNULL:
		break;
	}

}