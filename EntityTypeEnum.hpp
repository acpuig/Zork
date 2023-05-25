//
//  EntityTypeEnum.hpp
//  AriadnaCortes_MasterTest
//
//  Created by joseluiscortes on 24/5/23.
//

#ifndef EntityTypeEnum_hpp
#define EntityTypeEnum_hpp

#include <stdio.h>
class EntityTypeEnum {
public:
    enum class EntityType {
        ROOM,
        ITEM,
        NPC,
        PLAYER,
        EXIT
    };
};

#endif /* EntityTypeEnum_hpp */
