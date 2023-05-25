//
//  Item.hpp
//  AriadnaCortes_MasterTest
//
//  Created by joseluiscortes on 24/5/23.
//

#include <stdio.h>

#include "Entity.hpp"

class Item : public Entity {
public:
    
    Item(const std::string& name, const std::string& description);
    void update() override;
    
};


