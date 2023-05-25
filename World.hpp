//
//  World.hpp
//  AriadnaCortes_MasterTest
//
//  Created by joseluiscortes on 24/5/23.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include "Entity.hpp"

class World {
public:
    World();
    ~World();

    void updateAll();
    void addEntity(Entity* entity);
    void removeEntity(Entity* entity);

    std::vector<Entity*> entities;
};
