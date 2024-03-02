/*
 * bit_manipulation.h
 *
 * SET, CLEAR, Toggle Bit
 *
 */ 


#ifndef BIT_MANIPULATION_H_
#define BIT_MANIPULATION_H_





// Bit Manipulation: (Function - like macros)
//------------------

// write 1 on this pin
#define SET_BIT(pinNumber,portName)			*portName |= (1<<pinNumber)//;

// write 0 on this pin
#define CLEAR_BIT(pinNumber,portName)		*portName &= ~(1<<pinNumber)//;

// read this bit (get state)
#define GET_BIT(pinNumber,portName,value)	*value =((*portName)&(1<<pinNumber))>>pinNumber//;

// Toggle Bit value (0 <-> 1)    ( ^ XOR ) (1 XOR 1 = 0) (0 XOR 1 = 1)
#define TOGGLE_BIT(pinNumber,portName)		*portName ^=(1<<pinNumber)//;






/*

#include "./MCAL/registers_atmega32.h"  // I'm Currently located in main.c folder 
#include "./Utilities/types.h"









void set_bit(uint8_t pinNumber,volatile uint8_t *portName);	// write 1 on this pin

void clear_bit(uint8_t pinNumber,volatile uint8_t *portName); // write 0 on this pin

void get_bit(uint8_t pinNumber,volatile uint8_t *portName,uint8_t **value); // read this bit (get bit state)

void toggle_bit(uint8_t pinNumber,volatile uint8_t *portName); // toggle pin value (0 <-> 1)

*/

#endif /* BIT_MANIPULATION_H_ */

/***********************************************************************/
/*                           END of File                               */
/***********************************************************************/
