#pragma once
#include "SceneBase.h"
#include "Include.h"
class SceneBattle :
	public SceneBase
{

	private:
		//画像ハンドル
		int m_backImage;
	public:
		SceneBattle();
		~SceneBattle();

		void Render()override;
};

