#pragma once
#include "EnemyBase.h"
class EnemyGoblinWarrior :
	public EnemyBase
{
	private:
		int m_image;

	public:
		EnemyGoblinWarrior();
		~EnemyGoblinWarrior();

		int GetImage()override;
};

