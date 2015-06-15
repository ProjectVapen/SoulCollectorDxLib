#pragma once
/*
	SceneBase
	シーン基底クラス
	抽象クラス


*/
class SceneBase
{
	public:
		virtual ~SceneBase() = default;

		virtual void Render() = 0;

};

