#include "TransitLine.h"

TransitLine::TransitLine( std::vector<Edge> const &edges, int num_stations )
{
  adjList.resize( num_stations );

  for( auto & edge : edges )
  {
    StationName src    = edge.src;
    StationName dest   = edge.dest;
    int     distance = edge.distance;

    adjList[static_cast<int>(src)]  . push_back( std::make_pair( dest, distance ) );  
    adjList[static_cast<int>(dest)] . push_back( std::make_pair( src,  distance ) );  
  }
}

TransitLine::~TransitLine()
{

}

std::ostream & operator << ( std::ostream & output, const TransitLine & graph )
{
  for( unsigned int i = 0; i < graph.adjList.size(); i++ )
  {
    for( Pair v: graph.adjList[i] )
      output << "(" << static_cast<StationName>(i) << ", " << v.first <<
      ", " << v.second << ") ";
    output << std::endl;
  }
  
  return output;
}
