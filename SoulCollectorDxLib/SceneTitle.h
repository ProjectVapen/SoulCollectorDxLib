#pragma once
#include "SceneBase.h"
class SceneTitle:
	public SceneBase
{
	private:
		//画像ハンドル
		int m_backImage;
	public:
		SceneTitle();
		~SceneTitle();
};

