#include "ManagementScene.h"
#include "SceneTitle.h"
#include "SceneStart.h"
#include "SceneBattle.h"

ManagementScene::ManagementScene(){
	m_pDataScene = std::make_unique<DataScene>();
	m_pScene = nullptr;
}


ManagementScene::~ManagementScene()
{
	
}

void ManagementScene::UpData(){

	this->ChangeScene();
	switch (this->NowScene()){
		
	case DataScene::eScene::eTITLE:
		m_pDataScene->PrevScene(DataScene::eScene::eTITLE);

		this->m_pScene = std::make_unique<SceneTitle>();

		break;
	case DataScene::eScene::eSTART:
		m_pDataScene->PrevScene(DataScene::eScene::eSTART);

		this->m_pScene = std::make_unique<SceneStart>();

		break;

	case DataScene::eScene::eBATTLE:
		m_pDataScene->PrevScene(DataScene::eScene::eBATTLE);

		this->m_pScene = std::make_unique<SceneBattle>();
		
		break;
	
	case DataScene::eScene::eRESULT:
		m_pDataScene->PrevScene(DataScene::eScene::eRESULT);

		this->m_pScene = nullptr;

		break;

	case DataScene::eScene::eNULL:
		this->m_pScene = nullptr;

		break;


	}
}

void ManagementScene::ChangeScene(){


	switch (m_pDataScene->NextScene())
	{
	case DataScene::eScene::eTITLE:

		m_pDataScene->NowScene(DataScene::eScene::eTITLE);
		m_pDataScene->NextScene(DataScene::eScene::eSTART);

		break;

	case DataScene::eScene::eSTART:

		m_pDataScene->NowScene(DataScene::eScene::eSTART);
		m_pDataScene->NextScene(DataScene::eScene::eBATTLE);

		break;

	case DataScene::eScene::eBATTLE:
		m_pDataScene->NowScene(DataScene::eScene::eBATTLE);
		m_pDataScene->NextScene(DataScene::eScene::eTITLE);

		break;

	case DataScene::eScene::eRESULT:

		m_pDataScene->NowScene(DataScene::eScene::eRESULT);
		m_pDataScene->NextScene(DataScene::eScene::eSTART);

		break;


	}
}

DataScene::eScene ManagementScene::NowScene(){
	return m_pDataScene->NowScene();
}

void ManagementScene::NextScene(DataScene::eScene nextScene){
	 m_pDataScene->NextScene(nextScene);
}

void ManagementScene::Render(){
	m_pScene->Render();
}