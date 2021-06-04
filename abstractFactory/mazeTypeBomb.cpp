#include "stdio.h"
#include "string.h"
#include "mazeTypeBomb.h"

bombRoom::bombRoom(/* args */)
{
    printf("bombRoom creat\n");
}

bombRoom::~bombRoom()
{

}

void bombRoom::mapEnter(void)
{
    printf("enter bombRoom\n");
}

bombWall::bombWall(/* args */)
{
    printf("bombWall creat\n");        
}

bombWall::~bombWall()
{

}

void bombWall::mapEnter(void)
{
    printf("enter bombWall\n");
}

mazebombFactory::mazebombFactory(/* args */)
{
}

mazebombFactory::~mazebombFactory()
{
}

WALL*  mazebombFactory::creatWall(/* args */)
{
    printf("creat a bombWall\n");
    return new bombWall();
}

ROOM* mazebombFactory::creatRoom(/* args */)
{
    printf("creat a bombRom\n");
    return new bombRoom(); 
}