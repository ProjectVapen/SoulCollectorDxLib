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

		std::unique_ptr<SceneBase> m_pScene;
		std::unique_ptr<DataScene>m_pDataScene;

	public:
		ManagementScene();
		~ManagementScene();

		void ChangeScene();


};

