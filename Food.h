#ifndef FOOD_H
#define FOOD_H

#include <cstdlib>
#include <time.h>

#include "objPos.h"
#include "objPosArrayList.h"
#include "GameMechs.h"
#include "Player.h"
#include "MacUILib.h"

using namespace std;


class Food
{
    private:
        objPos foodPos; 

    public:
        Food();
        ~Food();

        void generateFood(GameMechs* gameMechs, objPosArrayList* playerPosList);
        void getFoodPos(objPos &returnPos);
        void setGameMechs(GameMechs* gameMechs);

};

#endif