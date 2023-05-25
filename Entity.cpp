//
//  Entity.cpp
//  AriadnaCortes_MasterTest
//
//  Created by joseluiscortes on 24/5/23.
//
#include <iostream>
#include <vector>
#include <algorithm>

#include "Entity.hpp"
#include "EntityTypeEnum.hpp"

Entity::Entity(
               EntityType entity_type,
               const std::string& name,
               const std::string& description
               ): entity_type(entity_type), name(name), description(description) {}
    
void Entity::update() {}
    
void Entity::interact() {}
    
Entity::EntityType Entity::getEntityType() const {
        return entity_type;
    }
    
const std::string& Entity::getName() const {
        return name;
    }
    
const std::string& Entity::getDescription() const {
        return description;
    }
    
void Entity::setName(const std::string& new_name) {
        name = new_name;
    }
    
void Entity::setDescription(const std::string& new_description) {
        description = new_description;
    }
    
void Entity::addEntity(Entity* entity) {
        contains.push_back(entity);
    }
    
    const std::vector<Entity*>& Entity::getContains() const {
        return contains;
    }

