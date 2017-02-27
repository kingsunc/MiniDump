#include "MiniDump.h"
#include <stdlib.h>
#include <ctime>
#include <string>

void main()
{
	MiniDump::EnableAutoDump(true);

	const int iNum = 6;
	srand((unsigned)time(NULL));
	int iRandom = rand() % iNum;

	switch (iRandom)
	{
	case 0:
		{
			int* p = NULL;
			*p = 5;
		}
		break;
	case 1:
		{
			int j = 0;
			int i = 5 / j;
		}
		break;
	case 2:
		{
			int* p = NULL;
			*p = 5;
		}
		break;
	case 3:
		{
			int* p = NULL;
			*p = 5;
		}
		break;
	case 4:
		{
			int* p = NULL;
			*p = 5;
		}
		break;
	case 5:
		{
			int* p = NULL;
			*p = 5;
		}
		break;
	default:
		{
			std::string strTemp = "这是奇葩，不在六道轮回之内";
		}
		break;
	}
}