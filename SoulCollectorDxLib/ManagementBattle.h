#pragma once
/*
	í“¬ŠÇ—ƒNƒ‰ƒX



*/
#include "BattleCard.h"
#include "BattleEnemy.h"
#include "BattleMedium.h"
#include "BattlePlayer.h"

#include "Include.h"
#include "AppController.h"
class ManagementBattle
{
	private:
		std::unique_ptr<BattleCard> m_pBattleCard;
		std::unique_ptr<BattleEnemy> m_pBattleEnemy;
		std::unique_ptr<BattleMedium> m_pBattleMedium;
		std::unique_ptr<BattlePlayer> m_pBattlePlayer;

	public:
		ManagementBattle();
		~ManagementBattle();

		void PushKeyState(AppController::eGetController pushKey);

		void PushKeyState();


};

