#ifndef __ENEMY_H__
#define	__ENEMY_H__

#include "DxLib.h"
#include <stdlib.h>
#include <stdio.h>


/***********************************************
 * 定数の宣言
 ***********************************************/

#define ENEMY_MOVE_SPEED 1		//敵の動く速さ
#define GOSA 8	//敵描画の際のY軸の誤差用

/***********************************************
 * 列挙体の宣言
 ***********************************************/
enum ENEMY{
	KURIBO,				// クリボー
	KURIBO_DIE,			// つぶれたクリボー
	NOKONOKO,			// ノコノコ
	NOKONOKO_2,			// ノコノコ(歩き用)
	SHELL	= 10,		// カメのコウラ
	SHELL_2,			// カメのコウラ(足生え)
	PAKKUN_FLOWER = 14,	// パックンフラワー(口開け)
	PAKKUN_FLOWER_2		// パックンフラワー(口閉じ)
};

extern int Enemy_Image[20];		// エネミー画像

/***********************************************
 関数のプロトタイプ宣言
 **********************************************/
extern void EnemyInit(void);		// エネミー初期化
extern void EnemyControll(void);	// エネミー制御
extern void EnemyFall(void);		// エネミー落下
extern void DrawEnemy(void);		// エネミー描画



#endif  //!__ENEMY_H__