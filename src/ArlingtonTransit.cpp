#include <iostream>
#include <vector>

#include "TransitLine.h"

#define NUM_STATIONS 3

int main()
{
  Station Uta(StationName::UTA);
  Station Prince(StationName::Prince);
  Station Pioneer(StationName::Pioneer);

  std::vector< Edge > UTA_Line;

  struct Edge UTA2Prince;
  UTA2Prince . src  = StationName::UTA;
  UTA2Prince . dest = StationName::Prince;
  UTA2Prince . distance = 1;

  UTA_Line . push_back( UTA2Prince );

  struct Edge UTA2Pioneer;
  UTA2Pioneer . src  = StationName::UTA;
  UTA2Pioneer . dest = StationName::Pioneer;
  UTA2Pioneer . distance = 2;

  UTA_Line . push_back( UTA2Pioneer );

  TransitLine UTA( UTA_Line, NUM_STATIONS );

  std::cout << UTA << std::endl;


  
  return 0;
}

