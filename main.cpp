#include <iostream> 

using namespace std; 

#include "commbase.hpp"
#include "gcs_mavlink.hpp"

extern "C"{ extern int main(int argc, char **argv);}

int main(int argc, char **argv)
{ 
    COMMBASE *inst = new GCS_MAVLINK();
    
    uint8_t buf[20];

    inst->getData(20, buf);
    inst->sendData(20, buf);

    free(inst);
} 
