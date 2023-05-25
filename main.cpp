//
//  main.cpp
//  AriadnaCortes_MasterTest
//
//  Created by joseluiscortes on 24/5/23.
//

#include <iostream>
#include <vector>
#include <algorithm>

#include "World.hpp"
#include "Entity.hpp"
#include "Room.hpp"
#include "Item.hpp"
#include "Player.hpp"
#include "NPC.hpp"

World createWorld() {
    World world;

    // Create entities
    Room* livingRoom = new Room("Living Room", "A cozy living room.");
    world.entities.push_back(livingRoom);

    Item* table = new Item("Table", "A wooden table.");
    livingRoom->contains.push_back(table);

    Item* lamp = new Item("Lamp", "A tall standing lamp.");
    livingRoom->contains.push_back(lamp);

    NPC* cat = new NPC("Cat", "A fluffy cat.");
    livingRoom->contains.push_back(cat);

    Player* player = new Player("Player", "You");
    livingRoom->contains.push_back(player);
    
    //Exit* exitToHallway = new Exit("Hallway", livingRoom, nullptr);
   // livingRoom->contains.push_back(exitToHallway);

    return world;
}


int main() {
    
    World world = createWorld();

    std::cout << "Welcome to the Text Adventure Game!\n";
    std::cout << "You find yourself in a " << world.entities[0]->getName() << ".\n";

    while (true) {
            std::string userInput;
            std::cout << ">> ";
            std::getline(std::cin, userInput);
            std::transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);

            if (userInput == "quit") {
                std::cout << "Thank you for playing!\n";
                break;
            }

            Entity* currentRoom = world.entities[0];
            std::vector<Entity*> currentEntities = currentRoom->contains;
            currentEntities.push_back(currentRoom);

            // Check if the player can see the entity mentioned in the input
            for (Entity* entity : currentEntities) {
                if (userInput.find(entity->getName()) != std::string::npos) {
                    entity->interact();
                    break;
                }
            }

            world.updateAll();
        }

    // Clean up memory
    for (Entity* entity : world.entities) {
        delete entity;
    }

    return 0;
}


