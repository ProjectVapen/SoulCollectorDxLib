#pragma once
#include "EnemyBase.h"
class EnemySlime :
	public EnemyBase
{
	private:
		int m_image;

	public:
		EnemySlime();
		~EnemySlime();

		int GetImage()override;
};

