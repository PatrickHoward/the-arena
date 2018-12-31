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

#include <iostream>
#include <ctime>

#include "creature.hpp"
#include "encounter.hpp"

int main()
{
    srand(time(0));

    Creature human("Human", 20, 5, 2, 3);
    Creature orc("Orc", 15, 7, 3, 0);

    Encounter battle(human, orc);
    battle.setupEncounter();
    battle.enactEncounter();    

}