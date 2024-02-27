
/*
 * LED_diode.h
 *
 * 
 */ 


#ifndef LED_DIODE_H_
#define LED_DIODE_H_

#include "./Utilities/types.h"



// LED Activating Logic Types:
#define ACTIVE_LOW 0
#define ACTIVE_HIGH 1




/*



// TODO


functions of the button:


OFF:
---


ON:
--


Dimming: (involving Timer , PWM knowledge ) // TODO_Advanced
-------


Different color:  (Need: Reverse Polarity or Communication Protocol or ...)          // TODO_Advanced
----------------

the color changing method depend on the LED type :

1- Reverse Polarity (Bi Color LED)

2- data transmission using Communication Protocol

3- 
 
*/


/********************* Functions Prototype	******************/



void LED_init(uint8_t pinNumber,uint8_t portNumber, uint8_t LED_Activating_Logic); // initiate LED (initiate MCU pin which connected to LED to Be OUTPUT )


//TODO 
//(Active high or Active low Gates/Transistors (Current driver)) 
// LED_Activating_Logic {ActiveLow,ActiveHigh}
// LED_on()
// LED_off()

void LED_on(uint8_t pinNumber,uint8_t portNumber);	 // write HIGH on LED pin --> to be used as (LED OFF or LED ON) depend on the connected circuit (Active high or Active low Gates/Transistors (Current driver)) 


void LED_off(uint8_t pinNumber,uint8_t portNumber);		 // write LOW on LED pin --> to be used as (LED OFF or LED ON) depend on the connected circuit (Active high or Active low Gates/Transistors (Current driver))


// TODO_Advanced
//void LED_dim(); // Advanced function (learn Timers & PWM then develop this function) 








#endif /* LED_DIODE_H_ */

/***********************************************************************/
/*                           END of File                               */
/***********************************************************************/
