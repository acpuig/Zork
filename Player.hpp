//
//  Player.hpp
//  AriadnaCortes_MasterTest
//
//  Created by joseluiscortes on 24/5/23.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>

#include "Entity.hpp"

class Player : public Entity {
public:
    Player(const std::string& name, const std::string& description);
    void update() override;

    // Additional member variables or functions specific to Player
};
#endif /* Player_hpp */
