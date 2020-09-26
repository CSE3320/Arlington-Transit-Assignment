#include "Station.h"

Station::Station( StationName id ): id_(id)
{

};

std::ostream & operator << ( std::ostream & output, const StationName & station )
{
  output << StationToString[station];
  return output;
}

