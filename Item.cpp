//
//  Item.cpp
//  AriadnaCortes_MasterTest
//
//  Created by joseluiscortes on 24/5/23.
//
#include <iostream>
#include "Item.hpp"



Item::Item(const std::string& name, const std::string& description)
    : Entity(EntityType::ITEM, name, description) {}

void Item::update() {
    // Implementation of the update function for the Item class
}
