#pragma once
/*

	敵の抽象クラス
	敵の基底クラス

*/
class EnemyBase
{
	public:
		~EnemyBase() = default;

		virtual int GetImage() = 0;

};


