#include "stdio.h"
#include "string.h"
#include "mazeBase.h" 
#include "mazeTypeBomb.h"
#include "mazeTypeOther.h"

int main(int argc,char* agrv[])
{
    mazeGame *mGame = new mazeGame();
    mGame->mazeCreat(new mazebombFactory() );//创建有炸弹属性的房间
    mGame->mazeCreat(new mazeotherFactory());//创建有其他属性的房间
    return 0;
}