#pragma once
/*
	êÌì¨ä«óùÉNÉâÉX



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

		bool m_isSelect;

	public:

		ManagementBattle();
		~ManagementBattle();

		void PushKeyState(AppController::eGetController pushKey);

		void PushKeyState();

		void Proc();
		void Render();

		bool IsSelectEnd();
		void IsSelectEnd(bool);
		
};

