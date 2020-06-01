//
// Created by oyvind on 21.12.2019.
//
#include <stdlib.h>
#include <stdint.h>
#include <vector>

#ifndef SOUNDWEB_SERIAL_SWSERIAL_H
#define SOUNDWEB_SERIAL_SWSERIAL_H

using namespace std;

class SWSerial {
private:
    uint16_t id;
    string name;

    vector<SWObjects*> swObj;
    vector<SWLogic*> swLogic;



public:
    SWSerial();
    SWSerial(uint16_t swID);
    SWSerial(uint16_t swID, string swName);

    ~SWSerial();

};


#endif //SOUNDWEB_SERIAL_SWSERIAL_H
