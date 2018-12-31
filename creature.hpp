/*
   This file is part ofadventure-engine the-arena.    

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

#include <string>

enum Actions
{
    attack = 'a', 
    defend = 'd',
    heal = 'h'
};

class Creature
{
public:
    Creature()
    {

    }

    Creature(std::string name_, int health_, int attack_, int strength_, int initiativeBonus)
        : name(name_),
        alive(true),
        health(health_),
        attack(attack_),
        strength(strength_),
        initiative(initiativeBonus)
    {

    }

    void takeDamage(int damageTaken)
    {
        health -= damageTaken;
    }

    void heal(int hpHealed)
    {
        health += hpHealed;
    }

    bool isAlive()
    {
        return alive;
    }

    void setIntitiative(int initiative_)
    {
        initiative += initiative_;
    }

    int checkInitiative()
    {
        return initiative;
    }

    std::string name;

private:
    bool alive;

    int health;
    int strength;
    int attack;    
    int initiative;
};

