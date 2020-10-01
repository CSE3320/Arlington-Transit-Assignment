#pragma once

#ifndef __STATION_H__
#define __STATION_H__

#include <string>
#include <iostream>
#include <map>


enum class StationName
{
  UTA = 0,
  Prince = 1,
  Pioneer = 2
};


static std::map < StationName, std::string > StationToString = 
{
  { StationName::UTA,     "UTA"     },
  { StationName::Prince,  "Prince"  },
  { StationName::Pioneer, "Pioneer" }
};

std::ostream & operator << ( std::ostream & output, const StationName & station );


class Station
{
  private:
    
    StationName id_;
    bool        occupied_;

  public:

    Station( StationName id );


    Station()                          = delete;          
    Station(const Station&)            = delete;             
    Station& operator=(const Station&) = delete;  
    Station(Station&&)                 = delete;                  
    Station& operator=(Station&&)      = delete;       

};


#endif
