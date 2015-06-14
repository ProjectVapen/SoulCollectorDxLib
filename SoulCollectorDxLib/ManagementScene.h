#pragma once
/*
	シーン管理クラス
*/


#include "SceneBase.h"
#include <memory>

class ManagementScene
{
	private:
		std::unique_ptr<SceneBase> m_pScene;


	public:
		ManagementScene();
		~ManagementScene();


};

