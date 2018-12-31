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

class DiceSet
{
public:
    DiceSet()
    {
        d6 = 6;
        d20 = 20;
        
    }

    int rollD6()
    {
        return std::rand() % d6;
    }

    int rollD20()
    {
        return std::rand() % d20; 
    } 

private:
    int d6;
    int d20;


};