#include <avr/io.h>
#include <avr/pgmspace.h>
#include "main.h"

//Codes captured from Generation 3 TV-B-Gone by Limor Fried & Mitch Altman
// table of POWER codes

//        2000, 27850,
//        390, 1580,
//        410, 3580,
//        400, 63200,

#ifdef NA_CODES
const uint16_t code_nikon000Times[] PROGMEM = {
        39, 158,
        40, 6320,
        41, 358,
        200, 2785,
};

const struct IrCode code_nikon000Code PROGMEM = {
        freq_to_timerval(38000),
        8,             // # of pairs
        2,              // # of bits per index
        code_nikon000Times,
        {
                0xC9,
                0XC9,
        
        }
};

const uint16_t code_canon000Times[] PROGMEM = {
	11,11,
	11,7330,

};

const struct IrCode code_canon000Code PROGMEM = {
        freq_to_timerval(38000),
        36,             // # of pairs
        2,              // # of bits per index
        code_canon000Times,
        {
					0x00, 
					0x00, 
					0x00, 
					0x00, 
					0x40, 
					0x00, 					 
					0x00, 
					0x00,  
					0x00,         
        }
};


const uint16_t code_pentax000Times[] PROGMEM = {

	100,100,
	1300,300,

};

const struct IrCode code_pentax000Code PROGMEM = {
        freq_to_timerval(38000),
        8,             // # of pairs
        2,              // # of bits per index
        code_pentax000Times,
        {
					0x40, 
					0x00, 					 
        }
};
#endif

////////////////////////////////////////////////////////////////


const struct IrCode * const NApowerCodes[] PROGMEM = {
#ifdef NA_CODES
  &code_nikon000Code,
  &code_canon000Code,
  &code_pen tax000Code,
#endif
};


const uint8_t num_NAcodes = NUM_ELEM(NApowerCodes);
