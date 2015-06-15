#pragma once
/*
	ゲームの全体の管理クラス



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

		//	シーンを切り替えるとかなんかしらあった時の更新処理	//
		void AppUpData();
		void AppProc();
		void AppRender();
};

