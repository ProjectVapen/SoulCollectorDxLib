#pragma once
#include "EnemyBase.h"
class EnemyEvilFlame :
	public EnemyBase
{
	private:
		int m_image;

	public:
		EnemyEvilFlame();
		~EnemyEvilFlame();

		int GetImage()override;
};

