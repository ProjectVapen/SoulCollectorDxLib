#pragma once
/*
	�Q�[���̑S�̂̊Ǘ��N���X



*/
#include "ManagementBattle.h"
#include "ManagementScene.h"
#include "ManagementTitle.h"
#include "ManagementStart.h"
#include "Include.h"

class AppManager
{
	private:
		

	public:
		AppManager();
		~AppManager();

		std::unique_ptr<ManagementBattle> m_pManageBattle;
		std::unique_ptr<ManagementScene>  m_pManagScene;
		std::unique_ptr<ManagementTitle>  m_pManagTitle;
		std::unique_ptr<ManagementStart>  m_pManagStart;

		//	�V�[����؂�ւ���Ƃ��Ȃ񂩂��炠�������̍X�V����	//
		void AppUpData();
		void AppProc();
		void AppRender();
};

