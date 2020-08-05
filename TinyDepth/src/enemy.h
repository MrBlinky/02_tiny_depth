#ifndef ENEMY_H
#define ENEMY_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lib/common.h"

//---------------------------------------------------------------------------
#define ENEMY_MAX_CHR_CNT			8


enum {
	ENEMY_TYPE_1_1,
	ENEMY_TYPE_1_2,
	ENEMY_TYPE_2_1,
	ENEMY_TYPE_2_2,
	ENEMY_TYPE_3_1,
	ENEMY_TYPE_3_2,
	ENEMY_TYPE_4_1,
	ENEMY_TYPE_4_2,
};

//---------------------------------------------------------------------------
typedef struct {
	bool isDraw;
	u8   type;
	s16  fx;
	s16  fxs;
	s16  fy;
	u8   cx;
	u8   cy;
	u8   val;
} ST_ENEMY_CHR;

typedef struct {
	u8 wave;				// ���݂̃E�F�[�u
	u8 make;				// �E�F�[�u���̓G�o����
	u8 wait;				// �G�o����̃E�F�C�g
	u8 rnd;					// �o���^�C�~���O

	u8 chrCnt;
	ST_ENEMY_CHR c[ENEMY_MAX_CHR_CNT];

} ST_ENEMY;


//---------------------------------------------------------------------------
void EnemyInit(void);
void EnemyExec(void);
void EnemyDraw(void);

void EnemyMove(void);
void EnemyMake(void);
void EnemyFire(void);

void EnemySetWaveNext(void);
u8   EnemyGetWave(void);
bool EnemyIsEnd(void);

void EnemyDecRnd(void);


#ifdef __cplusplus
}
#endif
#endif
