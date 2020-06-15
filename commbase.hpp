#ifndef _COMMBASE_H
#define _COMMBASE_H

#include <stdint.h>
#include <iostream> 

using namespace std;

class COMMBASE{

public:
    bool init();
    void run();

    virtual  uint8_t getData(uint8_t len, uint8_t *data);
    virtual  uint8_t sendData(uint8_t len,const uint8_t* data);
private: 
    int  check_communicator_method(int message_seq);
    void display_communicator_method(const uint8_t communicator_method);
};

#endif
