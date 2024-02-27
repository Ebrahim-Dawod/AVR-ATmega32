/*
 * dio.h
 *
 * 
 *  
 */ 


#ifndef DIO_H_
#define DIO_H_


//             what should i write here ?

// all include

#include "./Utilities/types.h"
#include "./Utilities/registers_atmega32.h"  // I'm Currently located in main.c folder 

// all internal driver typedefs
// all driver macros

// PORT Numbers (PORTx)
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

// Pin Direction & Modes
#define OUT 1				//	(DDRx)	
#define IN 0				//  (DDRx)
#define INTERNALLY_PULLED_UP_INPUT 2		//Internally pulled up input pin mode is --> Built inside the MCU without connecting any external pulling circuit // Supported Feature Activation  //(PORTx) & (SFIOR @ PUD bit  (Pull Up Disable)to be enabled)




 
 // Any Number other than ( 0(IN) & 1 (OUT) for Direction ) ... i choose Number 2 randomly





// Pin Value  
#define LOW 0
#define HIGH 1




//all driver function prototypes (external/static/internal)


void DIO_init(uint8_t pinNumber,uint8_t portNumber,uint8_t direction);  // Initialize DIO Pin Mode Direction(IN/OUT)
void DIO_write(uint8_t pinNumber,uint8_t portNumber,uint8_t value); // write data to dio pin
void DIO_read(uint8_t pinNumber,uint8_t portNumber,uint8_t *value); // read dio
void DIO_toggle(uint8_t pinNumber,uint8_t portNumber); // toggle dio pin













#endif /* DIO_H_ */

/***********************************************************************/
/*                           END of File                               */
/***********************************************************************/
