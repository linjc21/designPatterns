
#include "mazeBase.h"

#ifndef MAZE_TYPE_OTHER_H
#define MAZE_TYPE_OTHER_H

class otherRoom : public ROOM
{
private:
    /* data */
public:
    otherRoom(/* args */);
    ~otherRoom();
    virtual void mapEnter(void);
};

class otherWall : public WALL
{
private:
    /* data */
public:
    otherWall(/* args */);
    ~otherWall();
    virtual void mapEnter(void);
};

class mazeotherFactory : public mazeFactory
{ 
private:
    /* data */
public:
    mazeotherFactory(/* args */);
    ~mazeotherFactory();
    virtual WALL* creatWall();
    virtual ROOM* creatRoom(); 
};
#endif
