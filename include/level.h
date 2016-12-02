#pragma once

class Level
{
public:
    Level();
    ~Level();

    void levelUp();
    void reset();

private:
    int level;
};
