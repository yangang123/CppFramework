#ifndef GCS_MAVLINK_H
#define GCS_MAVLINK_H

#include "commbase.hpp"

class GCS_MAVLINK: public COMMBASE
{
public:
    uint8_t getData(uint8_t len,uint8_t* data);
    uint8_t sendData(uint8_t len,const uint8_t* data);
private:

};


#endif
