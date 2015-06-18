#pragma once
#include "EnemyBase.h"
class EnemyShytarn :
	public EnemyBase
{

	private:
		int m_image;
	
	public:
		EnemyShytarn();
		~EnemyShytarn();

		int GetImage()override;
};

