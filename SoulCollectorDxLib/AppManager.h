#pragma once
/*
	�Q�[���̑S�̂̊Ǘ��N���X



*/
#include "ManagementBattle.h"
#include "ManagementScene.h"
#include "Include.h"
class AppManager
{
	private:
		std::unique_ptr<ManagementBattle> m_pManageBattle;
		std::unique_ptr<ManagementScene>  m_pManagScene;
	public:
		AppManager();
		~AppManager();

		//	�V�[����؂�ւ���Ƃ��Ȃ񂩂��炠�������̍X�V����	//
		void UpData();
};

