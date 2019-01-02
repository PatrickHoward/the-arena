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

#include "creature.hpp"
#include "playerController.hpp"
#include "computerController.hpp"

#include "dice.hpp"

class Encounter
{
public:
    Encounter(Creature playerCreature_, Creature opponentCreature_)
        :playerCreature(playerCreature_),
        opponentCreature(opponentCreature_)
    {
        player.setPlayer(playerCreature);
    }

    void setupEncounter()
    {
        int playerInitiative = dice.rollD20();
        int opponentInitiative = dice.rollD20();

        playerCreature.setIntitiative(playerInitiative);
        opponentCreature.setIntitiative(opponentInitiative);
    }

    void enactEncounter()
    {
        std::cout << "A " << opponentCreature.name << " has entered the arena!\n";

        do
        {

            player.getAction();
            opponent.getAction();

            if(playerCreature.checkInitiative() > opponentCreature.checkInitiative())
            {
                playTurn(playerCreature, opponentCreature, player.selectedAction);
                playTurn(opponentCreature, playerCreature, opponent.selectedAction);
            }
            else if(opponentCreature.checkInitiative() > playerCreature.checkInitiative())
            {
                playTurn(opponentCreature, playerCreature, opponent.selectedAction);
                playTurn(playerCreature, opponentCreature,player.selectedAction);
            }


        }while(playerCreature.isAlive() && opponentCreature.isAlive());

        if(playerCreature.isAlive())
        {
            std::cout << playerCreature.name << " wins!\n";

        }
        else if(opponentCreature.isAlive())
        {
            std::cout << opponentCreature.name << " wins!\n";

        }

    }


private:
    void playTurn(Creature& activeCreatrue, Creature& targetCreature, Actions selectedAction)
    {
        int activeD6Roll = dice.rollD6();

        targetCreature.resetStrength();
        switch(selectedAction)
        {
            case attack:
                activeCreatrue.attemptAttack(targetCreature, activeD6Roll);
                break;
            case defend:
                activeCreatrue.defendSelf(activeD6Roll);
                break;
            case heal:
                activeCreatrue.heal(activeD6Roll);
                break;
        }
    }


    DiceSet dice;

    Creature playerCreature;
    PlayerController player;

    Creature opponentCreature;
    ComputerController opponent;

};