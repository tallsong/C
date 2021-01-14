#include "gameCompany.h"

void INIT_GAME_COMPANY(void **(Player), char *name)
{
    struct Player *p = malloc(sizeof(struct Player));
    strcpy(p->name, name);
    p->level = 0;
    p->exp = 0;
}
int FIGHT_GAME_COMPANY1(void * p, int gameDiff)
{
	struct Player * player = p;

	int addExp = 0;  //增加经验值

	switch (gameDiff)
	{
	case 1:
		addExp = isWin(90, 1);
		break;
	case 2:
		addExp = isWin(50, 2);
		break;
	case 3:
		addExp = isWin(30, 3);
		break;
	default:
		break;
	}

	//累积经验到玩家身上
	player->exp += addExp;
	player->level = player->exp / 10;

	if (addExp == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}


}

int isWin(int winRate, int diff)
{
    int r = random() % 100 + 1;
    if (r < winRate)
    {
        return diff * 10;
    }
    else
    {
        return 0;
    }
}

void PRINT_GAME_COMPANY1(void * p)
{
	struct Player * player = p;
	printf("玩家<%s> ------ 当前等级：<%d>级 ----- 当前经验： <%d> \n", player->name, player->level, player->exp);
}


void EXIT_GAME_COMPANY1(void * player)
{
	if ( player==NULL)
	{
		return;
	}

	free(player);
	player = NULL;
}