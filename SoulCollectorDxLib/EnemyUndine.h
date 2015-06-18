#pragma once
#include "EnemyBase.h"
class EnemyUndine :
	public EnemyBase
{

	private:
		int m_image;

	public:
		EnemyUndine();
		~EnemyUndine();
	
		int GetImage()override;
};
