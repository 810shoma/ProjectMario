#ifndef __ENEMY_H__
#define	__ENEMY_H__

#include "DxLib.h"
#include <stdlib.h>
#include <stdio.h>


/***********************************************
 * �萔�̐錾
 ***********************************************/

#define ENEMY_MOVE_SPEED 1		//�G�̓�������
#define GOSA 8	//�G�`��̍ۂ�Y���̌덷�p

/***********************************************
 * �񋓑̂̐錾
 ***********************************************/
enum ENEMY{
	KURIBO,				// �N���{�[
	KURIBO_DIE,			// �Ԃꂽ�N���{�[
	NOKONOKO,			// �m�R�m�R
	NOKONOKO_2,			// �m�R�m�R(�����p)
	SHELL	= 10,		// �J���̃R�E��
	SHELL_2,			// �J���̃R�E��(������)
	PAKKUN_FLOWER = 14,	// �p�b�N���t�����[(���J��)
	PAKKUN_FLOWER_2		// �p�b�N���t�����[(����)
};

extern int Enemy_Image[20];		// �G�l�~�[�摜

/***********************************************
 �֐��̃v���g�^�C�v�錾
 **********************************************/
extern void EnemyInit(void);		// �G�l�~�[������
extern void EnemyControll(void);	// �G�l�~�[����
extern void EnemyFall(void);		// �G�l�~�[����
extern void DrawEnemy(void);		// �G�l�~�[�`��



#endif  //!__ENEMY_H__