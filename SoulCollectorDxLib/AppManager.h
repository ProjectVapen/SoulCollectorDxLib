#pragma once
/*
	ゲームの全体の管理クラス



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

		
		void AppUpData();	//	シーンを切り替えるとかなんかしらあった時の更新処理

		void AppProc();		//　コントローラーとかのそれぞれのシーンの処理
		void AppRender();	//	背景描画などのそれぞれのシーンの描画処理

		void EnemyFilePath();
};

