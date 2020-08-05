#include "src/lib/sys.h"
#include "src/game.h"

//---------------------------------------------------------------------------
void setup(void)
{
	SysInit();

	GameInit();
}
//---------------------------------------------------------------------------
void loop(void)
{
	if(SysLoop() == FALSE)
	{
		return;
	}

	GameLoop();

	SysLoopEnd();
}
