#pragma once

#ifndef __TRANSITLINE_H__
#define __TRANSITLINE_H__

#include <vector>
#include <map>
#include <iostream>

#include "Station.h"

struct Edge {
  StationName  src, dest;
  int     distance;
};

typedef std::pair< StationName , int> Pair;

class TransitLine
{
  public:
    
    std::vector<std::vector<Pair>> adjList;

    TransitLine( std::vector<Edge> const & edges, int N );

    friend std::ostream & operator << ( std::ostream & output, const TransitLine & transitline );

    ~TransitLine();

    TransitLine()                              = delete;
    TransitLine(const TransitLine&)            = delete;
    TransitLine& operator=(const TransitLine&) = delete;
    TransitLine(TransitLine&&)                 = delete;
    TransitLine& operator=(TransitLine&&)      = delete;


};

#endif
