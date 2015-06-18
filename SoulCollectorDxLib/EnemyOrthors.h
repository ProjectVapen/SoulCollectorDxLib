#pragma once
#include "EnemyBase.h"
class EnemyOrthors :
	public EnemyBase
{

	private:
		int m_image;

	public:
		EnemyOrthors();
		~EnemyOrthors();

		int GetImage()override;
};

