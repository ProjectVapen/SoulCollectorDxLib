#pragma once
#include "EnemyBase.h"

class EnemyDoriard :
	public EnemyBase
{
	private:
		int m_image;
	
	public:
		EnemyDoriard();
		~EnemyDoriard();

		int GetImage()override;
};

