#pragma once
/*
	ゲーム全体のデータクラス



*/
#include "DataCard.h"
#include "DataEnemy.h"
#include "DataMedium.h"
#include "DataPlayer.h"

#include "Include.h"
class AppData
{
	private:

		bool m_upData;

		std::unique_ptr<DataCard> m_pDataCard;
		std::unique_ptr<DataCard> m_pDataEnemy;
		std::unique_ptr<DataCard> m_pDataMedium;
		std::unique_ptr<DataCard> m_pDataPlayer;

	public:
		AppData();
		~AppData(); 
		bool CanUpData();
		void IsStopUpData(bool upData);
};

