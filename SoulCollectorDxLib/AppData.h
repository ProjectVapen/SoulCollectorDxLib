#pragma once
#include "DataCard.h"
#include "DataEnemy.h"
#include "DataMedium.h"
#include "DataPlayer.h"

#include <memory>
class AppData
{
	private:
		std::unique_ptr<DataCard> m_pDataCard;
		std::unique_ptr<DataCard> m_pDataEnemy;
		std::unique_ptr<DataCard> m_pDataMedium;
		std::unique_ptr<DataCard> m_pDataPlayer;

	public:
		AppData();
		~AppData();
};

