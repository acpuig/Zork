//
//  World.cpp
//  AriadnaCortes_MasterTest
//
//  Created by joseluiscortes on 24/5/23.

#include "World.hpp"

World::World() {}

World::~World() {
    // Clean up memory for entities
    for (Entity* entity : entities) {
        delete entity;
    }
}

void World::updateAll() {
    for (Entity* entity : entities) {
        entity->update();
    }
}

void World::addEntity(Entity* entity) {
    entities.push_back(entity);
}

void World::removeEntity(Entity* entity) {
    // Find the entity in the vector and remove it
    auto it = std::find(entities.begin(), entities.end(), entity);
    if (it != entities.end()) {
        entities.erase(it);
        delete entity; // Clean up memory for the removed entity
    }
}
