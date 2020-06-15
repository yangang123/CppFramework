


#include <iostream>

#include "commbase.hpp"



bool COMMBASE::init()
{
    return false;
}

void COMMBASE::run()
{

}

uint8_t COMMBASE::getData(uint8_t len, uint8_t *data)
{
    cout << "COMMBASE::getData" << endl;
    return 0;
}

uint8_t COMMBASE::sendData(uint8_t len,const uint8_t* data)
{   
    cout << "COMMBASE::sendData" << endl;
    return 0;
}


int COMMBASE::check_communicator_method(int message_seq)
{
    return 0;
}

void COMMBASE::display_communicator_method(const uint8_t communicator_method)
{
   
}
