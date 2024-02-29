/*
*
*
*
*
*/


//HEADER GUARD
#ifndef REGISTERS_ATMEGA32_H_
#define REGISTERS_ATMEGA32_H_


#include "./Utilities/types.h"


/**********************************************/
/*           DIO Registers                    */
/**********************************************/



// port A registers
#define PORTA ((volatile uint8_t*)0x3B)     // PORTA -> 8-bit register 
#define DDRA ((volatile uint8_t*)0x3A)     // DDRA -> 8-bit register 
#define PINA ((volatile uint8_t*)0x39)     // PINA -> 8-bit register 


// port B registers
#define PORTB ((volatile uint8_t*)0x38)     // PORTB -> 8-bit register
#define DDRB ((volatile uint8_t*)0x37)     // DDRB -> 8-bit register
#define PINB ((volatile uint8_t*)0x36)     // PINB -> 8-bit register


// port C registers
#define PORTC ((volatile uint8_t*)0x35)     // PORTC -> 8-bit register
#define DDRC ((volatile uint8_t*)0x34)     // DDRC -> 8-bit register
#define PINC ((volatile uint8_t*)0x33)     // PINC -> 8-bit register


// port D registers
#define PORTD ((volatile uint8_t*)0x32)     // PORTD -> 8-bit register
#define DDRD ((volatile uint8_t*)0x31)     // DDRD -> 8-bit register
#define PIND ((volatile uint8_t*)0x30)     // PIND -> 8-bit register


//--------------------------------------------------------------------------------------------------

//  Special Function Input Output Register

#define SFIOR *((volatile uint8_t*)0x50)     // Special Function I/O Register... Page 70 in datasheet ...  -> 8-bit register
#define PUD 2          //"PUD" Pull Up Disable Bit 2 --> inside SFIOR Register ->initial Value 0 for Enable Pull Up Across all the Ports A,B,C,D










#endif /* REGISTERS_ATMEGA32_H_*/




/***********************************************************************/
/*                           END of File                               */
/***********************************************************************/
























