#pragma once
/*
	SceneBase
	シーン描画クラス
	抽象クラス


*/
class SceneBase
{
	public:
		virtual ~SceneBase() = default;

		virtual void Render() = 0;

		virtual void ImageDelete() = 0;
};

