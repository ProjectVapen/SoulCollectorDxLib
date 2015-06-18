#pragma once
#include "EnemyBase.h"
class EnemyDragon :
	public EnemyBase
{

	private:
		int m_image;

	public:
		EnemyDragon();
		~EnemyDragon();

		int GetImage()override;
};

