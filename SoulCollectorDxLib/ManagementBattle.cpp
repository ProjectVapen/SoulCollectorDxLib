#include "ManagementBattle.h"
#include "Entry.h"
extern Entry entry;

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
	entry.m_pApp->m_pAppData->IsUpData(true);
	
}

void ManagementBattle::Draw(){
	m_pBattleEnemy->Draw();
}