#include "stdio.h"
#include "string.h"
#include "mazeBase.h"

mapSite::mapSite(/* args */)
{
    printf("mapsite creat\n");
}

mapSite::~mapSite()
{

}

WALL::WALL(/* args */)
{
}

WALL::~WALL()
{
}

void WALL::mapEnter(void)
{
    printf("wall enter\n");
}

ROOM::ROOM(/* args */)
{
}

ROOM::~ROOM()
{
}

void ROOM::mapEnter(void)
{
    printf("ROOM enter\n");
}


mazeFactory::mazeFactory(/* args */)
{
}

mazeFactory::~mazeFactory()
{
}

WALL* mazeFactory::creatWall(/* args */)
{
}

ROOM* mazeFactory::creatRoom(/* args */)
{

}

int mazeGame::mazeCreat(mazeFactory * factory)
{
    ROOM* mroom = factory->creatRoom();
    WALL* mwall = factory->creatWall(); 
    mroom->mapEnter();
    mwall->mapEnter();
}

mazeGame::mazeGame(/* args */)
{
}

mazeGame::~mazeGame()
{

}