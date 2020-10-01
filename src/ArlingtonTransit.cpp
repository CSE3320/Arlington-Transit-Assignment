#include <iostream>
#include <vector>

#include "TransitLine.h"

int main()
{
  Station Uta(StationName::UTA);
  Station Prince(StationName::Prince);

  std::vector< Edge > UTA_Line;

  struct Edge UTA2Prince;
  UTA2Prince . src  = StationName::UTA;
  UTA2Prince . dest = StationName::Prince;
  UTA2Prince . distance = 1;

  UTA_Line . push_back( UTA2Prince );

  TransitLine UTA( UTA_Line, 2 );

  std::cout << UTA << std::endl;


  
  return 0;
}

