#ifdef _SOUNDWEB_SERIAL_H_
#define _SOUNDWEB_SERIAL_H_

class SoundwebSerial {

public:

}



#endif //_SOUNDWEB_SERIAL_H_

#include <stdlib.h>
#include "SWSerial.h"
/*
 * Set of standard values
 */

// Standard control codes
#define STX 0x02 // ASCII Start of Text
#define ETX 0x03 // ASCII End of Text
#define ACK 0x06 // ASCII Acknowledge
#define NAK 0x15 // ASCII No-acknowledge
#define ESC 0x1B // ASCII Escape


// Standard values for normal usage with objects, not presets
#define DI_SETSV                0x88
#define DI_SUBSCRIBESV          0x89
#define DI_UNSUBSCRIBESV        0x8A
#define DI_SETSVPERCENT         0x8D
#define DI_SUBSCRIBESVPERCENT   0x8E
#define DI_UNSUBSCRIBESVPERCENT 0x8F
#define DI_BUMPSVPERCENT        0x90

// Standard values for preset management
#define DI_VENUE_PRESET_RECALL  0x8B
#define DI_PARAM_PRESET_RECALL  0x8C
