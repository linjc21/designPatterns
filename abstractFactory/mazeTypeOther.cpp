#include "stdio.h"
#include "string.h"
#include "mazeTypeOther.h"

otherRoom::otherRoom(/* args */)
{
    printf("otherRoom creat\n");
}

otherRoom::~otherRoom()
{

}

void otherRoom::mapEnter(void)
{
    printf("enter otherRoom\n");
}

otherWall::otherWall(/* args */)
{
    printf("otherWall creat\n");        
}

otherWall::~otherWall()
{

}

void otherWall::mapEnter(void)
{
    printf("enter otherWall\n");
}

mazeotherFactory::mazeotherFactory(/* args */)
{
}

mazeotherFactory::~mazeotherFactory()
{
}

WALL*  mazeotherFactory::creatWall(/* args */)
{
    printf("creat a otherWall\n");
    return new otherWall();
}

ROOM* mazeotherFactory::creatRoom(/* args */)
{
    printf("creat a otherRoom\n");
    return new otherRoom(); 
}