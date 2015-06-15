#pragma once
#include "SceneBase.h"
class SceneResult:
	public SceneBase
{
	public:
		SceneResult();
		~SceneResult();

		void Render()override;
};

