#pragma once
#include "SceneBase.h"
class SceneStart:
	public SceneBase
{
	private:
		// 画像ハンドル
		int m_backImage;
	public:
		SceneStart();
		~SceneStart();
};

