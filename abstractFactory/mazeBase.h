
#ifndef MAZE_BASE_H
#define MAZE_BASE_H

class mapSite{
private:
    /* data */
public:
    mapSite(/* args */);
    ~mapSite();
    virtual void mapEnter(void) = 0;
};


class WALL : public mapSite{
private:
    /* data */
public:
    WALL(/* args */);
    ~WALL();
    virtual void mapEnter(void);
};


class ROOM : public mapSite
{
private:
    /* data */
public:
    ROOM(/* args */);
    ~ROOM();
    virtual void mapEnter(void);
};

class mazeFactory
{
private:
    /* data */
public:
    mazeFactory(/* args */);
    ~mazeFactory();
    virtual WALL* creatWall() = 0;
    virtual ROOM* creatRoom() = 0;
};

class mazeGame
{
private:
    /* data */
public:
    mazeGame();
    ~mazeGame();
    int mazeCreat(mazeFactory * factory);
};

#endif







