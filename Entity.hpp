//
//  Entity.hpp
//  AriadnaCortes_MasterTest
//
//  Created by joseluiscortes on 24/5/23.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

#ifndef ENTITY_HPP
#define ENTITY_HPP

//#include "EntityTypeEnum.hpp"

class Entity {
public:
    enum class EntityType {
        ROOM,
        ITEM,
        NPC,
        PLAYER,
        EXIT
    };
    
    Entity(EntityType entity_type, const std::string& name, const std::string& description);
    virtual ~Entity() = default;

    virtual void update();
    virtual void interact();

    EntityType getEntityType() const;
    const std::string& getName() const;
    const std::string& getDescription() const;

    void setName(const std::string& new_name);
    void setDescription(const std::string& new_description);

    void addEntity(Entity* entity);
    const std::vector<Entity*>& getContains() const;
    std::vector<Entity*> contains;


private:
    EntityType entity_type;
    std::string name;
    std::string description;
};

#endif  // ENTITY_HPP
