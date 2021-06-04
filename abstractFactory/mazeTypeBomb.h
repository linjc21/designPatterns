
#include "mazeBase.h"

#ifndef MAZE_TYPE_BOMB_H
#define MAZE_TYPE_BOMB_H

class bombRoom : public ROOM
{
private:
    /* data */
public:
    bombRoom(/* args */);
    ~bombRoom();
    virtual void mapEnter(void);
};

class bombWall : public WALL
{
private:
    /* data */
public:
    bombWall(/* args */);
    ~bombWall();
    virtual void mapEnter(void);
};

class mazebombFactory : public mazeFactory
{ 
private:
    /* data */
public:
    mazebombFactory(/* args */);
    ~mazebombFactory();
    virtual WALL* creatWall();
    virtual ROOM* creatRoom(); 
};
#endif
