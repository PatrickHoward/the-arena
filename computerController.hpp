/*
   This file is part of the-arena.    

    the-arena is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>. 
*/ 

#pragma once

#include <cstdlib>

#include "creature.hpp"

class ComputerController
{
public:
    ComputerController()
    {

    }

    void getAction()
    {
        bool choosing = true;
        while(choosing)
        {
            int indicatedAction = std::rand() % 104;

            if(indicatedAction == 94)
            {
                selectedAction = attack;
                choosing = false;
            }
            else if(indicatedAction == 100)
            {
                selectedAction = defend;
                choosing = false;
            }
            else if(indicatedAction == 104)
            {
                selectedAction = heal;
                choosing = false;
            }
        }
    }

    void setOpponent(Creature opponentCreature_)
    {
        opponentCreature = opponentCreature_;
    }

    Actions selectedAction;

private:
    Creature opponentCreature;
};