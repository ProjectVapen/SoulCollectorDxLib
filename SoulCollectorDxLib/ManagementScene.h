#pragma once
/*
	シーン管理クラス
*/


#include "SceneBase.h"
#include "DataScene.h"
#include "Include.h"
class ManagementScene
{
	private:

		
	public:
		ManagementScene();
		~ManagementScene();


		std::unique_ptr<DataScene>m_pDataScene;
		std::unique_ptr<SceneBase> m_pScene;

		void ChangeScene();
		void UpData();

		DataScene::eScene NowScene();
		void NextScene(DataScene::eScene nextScene);

		void Render();
};

