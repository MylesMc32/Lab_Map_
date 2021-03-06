//
//  Map.h
//  Lab_Map_


#ifndef Map_h
#define Map_h
#pragma once
#include <stack>
#include "Location.h"
class Map
{
private:
    std::stack<Location *> _path;
    
public:
    Map(std::string startLocationName);
    ~Map();
    
    Location * CurrentLocation = nullptr;
    std::string goHome();
    void Move(Location *newLocation);
};



#endif /* Map_h */
