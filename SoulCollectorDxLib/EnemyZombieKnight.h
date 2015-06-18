#pragma once
#include "EnemyBase.h"
class EnemyZombieKnight :
	public EnemyBase
{
	private:
		int m_image;

	public:
		EnemyZombieKnight();
		~EnemyZombieKnight();

		int GetImage()override;

};

