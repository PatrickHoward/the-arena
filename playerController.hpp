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

#include <iostream>
#include <string>
#include <set>

#include "creature.hpp"

class PlayerController
{
public:
    PlayerController()
    {

    }

    void getAction()
    {
        bool choosing = true;
        while(choosing)
        {
            std::cout << "What will you do? (A)ttack (D)efend or (H)eal > ";
            std::getline(std::cin, action);

            int indicatedAction = tolower(action[0]);
            selectedAction = static_cast<Actions>(indicatedAction);
            choosing = false;
        }
    }

    void setPlayer(Creature playerCreature_)
    {
        playerCreature = playerCreature_;
    }

    Actions selectedAction;

private:
    Creature playerCreature;
    
    std::string action;

};