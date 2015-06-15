#pragma once
#include "SceneBase.h"
#include "Include.h"
class SceneBattle :
	public SceneBase
{

	private:
		//‰æ‘œƒnƒ“ƒhƒ‹
		int BackImage;
	public:
		SceneBattle();
		~SceneBattle();

		void Render()override;
};

