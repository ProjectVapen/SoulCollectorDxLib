#pragma once
#include "EnemyBase.h"
class EnemyBigShield :
	public EnemyBase
{

	private:
		int m_image;

	public:
		EnemyBigShield();
		~EnemyBigShield();

		int GetImage()override;
};

