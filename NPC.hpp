//
//  NPC.hpp
//  AriadnaCortes_MasterTest
//
//  Created by joseluiscortes on 24/5/23.
//

#ifndef NPC_hpp
#define NPC_hpp
#include <iostream>
#include <vector>
#include <algorithm>

#include "Entity.hpp"

class NPC : public Entity {
public:
    NPC(const std::string& name, const std::string& description);
    void update() override;

};

#endif /* NPC_hpp */
