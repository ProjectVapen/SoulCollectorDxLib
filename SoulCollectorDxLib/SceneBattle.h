#pragma once
#include "SceneBase.h"
#include "Include.h"
class SceneBattle :
	public SceneBase
{

	private:
		//画像ハンドル
		int BackImage;
	public:
		SceneBattle();
		~SceneBattle();

		void Render()override;
};

