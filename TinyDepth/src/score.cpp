#include "score.h"
#include "lib/eep.h"

#define EEPROM_ADDR 16

//---------------------------------------------------------------------------
ST_SCORE Score;


//---------------------------------------------------------------------------
void ScoreInit(void)
{
	_Memset(&Score, 0x00, sizeof(ST_SCORE));

	ScoreLoad();
}
//---------------------------------------------------------------------------
void ScoreSave(void)
{
	if(Score.high > Score.now)
	{
		return;
	}
	Score.high = Score.now;


	EepSeek(EEPROM_ADDR);

	EepWrite8('D');
	EepWrite8('P');

	EepWrite16(Score.high);
}
//---------------------------------------------------------------------------
void ScoreLoad(void)
{
	Score.high = 0;


	EepSeek(EEPROM_ADDR);

	if(EepRead8() != 'D') return;
	if(EepRead8() != 'P') return;

	Score.high = EepRead16();
}
//---------------------------------------------------------------------------
u16 ScoreGetHigh(void)
{
	return Score.high;
}
//---------------------------------------------------------------------------
void ScoreAddNow(u16 num)
{
	Score.now += num;
}
//---------------------------------------------------------------------------
u16 ScoreGetNow(void)
{
	return Score.now;
}
