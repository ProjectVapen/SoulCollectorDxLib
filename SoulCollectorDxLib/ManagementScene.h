#pragma once
/*
	�V�[���Ǘ��N���X
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

