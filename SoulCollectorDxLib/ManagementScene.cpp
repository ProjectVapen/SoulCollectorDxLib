#include "ManagementScene.h"
#include "SceneTitle.h"
#include "SceneStart.h"
#include "SceneBattle.h"

ManagementScene::ManagementScene(){
	m_pDataScene = std::make_unique<DataScene>();
	m_pScene = std::make_unique<SceneTitle>();
}


ManagementScene::~ManagementScene()
{
	
}


void ManagementScene::ChangeScene(){


	switch (m_pDataScene->NextScene())
	{
	case DataScene::eScene::eTitle:
		m_pDataScene->PrevScene(DataScene::eScene::eNone);
		m_pDataScene->NowScene(DataScene::eScene::eTitle);
		m_pDataScene->NextScene(DataScene::eScene::eStart);
		break;

	case DataScene::eScene::eStart:
		m_pDataScene->PrevScene(DataScene::eScene::eTitle);
		m_pDataScene->NowScene(DataScene::eScene::eStart);
		m_pDataScene->NextScene(DataScene::eScene::eBattle);
		break;

	case DataScene::eScene::eBattle:
		m_pDataScene->PrevScene(DataScene::eScene::eStart);
		m_pDataScene->NowScene(DataScene::eScene::eBattle);
		m_pDataScene->NextScene(DataScene::eScene::eResult);
		break;

	case DataScene::eScene::eResult:
		m_pDataScene->PrevScene(DataScene::eScene::eBattle);
		m_pDataScene->NowScene(DataScene::eScene::eResult);
		m_pDataScene->NextScene(DataScene::eScene::eStart);
		break;


	}
}

DataScene::eScene ManagementScene::NowScene(){
	return m_pDataScene->NowScene();
}

void ManagementScene::NextScene(DataScene::eScene nextScene){
	 m_pDataScene->NextScene(nextScene);
}