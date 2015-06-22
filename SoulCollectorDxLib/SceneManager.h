#pragma once
/*
	シーン管理クラス
*/


#include "SceneBase.h"
#include "DataScene.h"
#include "Include.h"

class SceneManager
{
	private:
		
		std::unique_ptr<DataScene>m_pDataScene;
		std::unique_ptr<SceneBase> m_pScene;
		

	public:
		SceneManager();
		~SceneManager();

		void ChangeScene();
		void UpData();

		DataScene::eScene NowScene();
		void NextScene(DataScene::eScene nextScene);

		void Render();
};

