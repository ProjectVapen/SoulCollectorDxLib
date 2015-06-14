#pragma once
/*
	ゲームの全体の管理クラス



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

		//	シーンを切り替えるとかなんかしらあった時の更新処理	//
		void UpData();
};

