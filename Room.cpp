//
//  Room.cpp
//  AriadnaCortes_MasterTest
//
//  Created by joseluiscortes on 24/5/23.
//

#include <iostream>
#include <vector>
#include <algorithm>

#include "Room.hpp"

Room::Room(const std::string& name, const std::string& description)
: Entity(EntityType::ROOM, name, description) {}

    void Room::update() {
    }
