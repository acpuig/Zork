//
//  Room.hpp
//  AriadnaCortes_MasterTest
//
//  Created by joseluiscortes on 24/5/23.
//

#ifndef Room_hpp
#define Room_hpp

#include <stdio.h>

#include "Entity.hpp"

class Room : public Entity {
public:
    Room(const std::string& name, const std::string& description);
    void update() ;
};

#endif /* Room_hpp */
