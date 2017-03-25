//
//  Map.cpp
//  Lab_Map_
//
//  Created by Myles McKendell on 3/24/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//

#include <stdio.h>
#include "Map.h"



Map::Map(std::string startLocationName)
{
    CurrentLocation = new Location(startLocationName);
}


Map::~Map()
{
}

void Map::Move(Location *newLocation)
{
    _path.push(newLocation);
    CurrentLocation = newLocation;
}

/*std::string Map::goHome()
{
    
    return _path;
}*/ //cannot seem to pass ptr value to path within void GoHome function
