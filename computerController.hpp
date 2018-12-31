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
            
        }
    }

    void doAction()
    {
        switch(selectedAction)
        {
            case attack:
                break;

            case defend:
                break;

            case heal:
                break;
        }
    }

    void setOpponent(Creature opponentCreature_)
    {
        opponentCreature = opponentCreature_;
    }

private:
    Creature opponentCreature;

    Actions selectedAction;
};