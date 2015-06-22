#pragma once
/*
	�Q�[���̑S�̂̊Ǘ��N���X



*/
#include "ManagementBattle.h"
#include "SceneManager.h"
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
		std::unique_ptr<SceneManager>  m_pManagScene;
		std::unique_ptr<ManagementTitle>  m_pManagTitle;
		std::unique_ptr<ManagementStart>  m_pManagStart;

		
		void AppUpData();	//	�V�[����؂�ւ���Ƃ��Ȃ񂩂��炠�������̍X�V����

		void AppProc();		//�@�R���g���[���[�Ƃ��̂��ꂼ��̃V�[���̏���
		void AppRender();	//	�w�i�`��Ȃǂ̂��ꂼ��̃V�[���̕`�揈��

		void EnemyFilePath();
};

