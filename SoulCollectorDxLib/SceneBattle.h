#pragma once
#include "SceneBase.h"
#include "Include.h"
class SceneBattle :
	public SceneBase
{

	private:
		//�摜�n���h��
		int BackImage;
	public:
		SceneBattle();
		~SceneBattle();

		void Render()override;
};

