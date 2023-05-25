//
//  NPC.cpp
//  AriadnaCortes_MasterTest
//
//  Created by joseluiscortes on 24/5/23.
//

#include "NPC.hpp"


NPC::NPC(const std::string& name, const std::string& description)
: Entity(Entity::EntityType::NPC, name, description) {}

void NPC::update() {
}
