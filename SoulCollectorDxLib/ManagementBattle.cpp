#include "ManagementBattle.h"
#include "Application.h"
extern std::unique_ptr<Application> pApp;

ManagementBattle::ManagementBattle(){

	m_pBattleCard = std::make_unique<BattleCard>();
	m_pBattleEnemy = std::make_unique<BattleEnemy>();
	m_pBattleMedium = std::make_unique<BattleMedium>();
	m_pBattlePlayer = std::make_unique<BattlePlayer>();

	
}


ManagementBattle::~ManagementBattle(){
}

void ManagementBattle::PushKeyState(AppController::eGetController pushKey){
	//コントローラー入力処理を記述

}

void ManagementBattle::PushKeyState(){
	
	WaitKey();
	pApp->m_pAppData->IsUpData(true);

}

void ManagementBattle::Render(){
	m_pBattleEnemy->Render();
}

void ManagementBattle::Proc(){

	if (m_pBattleEnemy->EnemyBrain())
	{
		//敵の思考終了後
		//プレイヤーの選択スタート
		
		IsSelectEnd(true);

	}

	if (IsSelectEnd())
	{
		//早い順に攻撃
		//ダメージ計算とかの処理
		//ダメージを反映
	}

}

bool ManagementBattle::IsSelectEnd(){
	return m_isSelect;
}

void ManagementBattle::IsSelectEnd(bool selectFlg){
	m_isSelect = selectFlg;
}

