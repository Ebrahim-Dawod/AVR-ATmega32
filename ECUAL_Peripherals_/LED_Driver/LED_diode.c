/*
 * LED.c
 *
 * 
 */ 


#include "../LED_Driver/LED_diode.h"
#include "./MCAL/DIO_Driver/dio.h"



// Error Source!!!!!!!!!!   !!!!!!!!!  !!!!!!   !!!!!!  !!!!  !!!!!!    !!!!!!! <<<<<<<<<<<<<<<<<<<<<<<<-------------<<<<<<<<<<<<<
static uint8_t LED_Activating_Logic_G;


void LED_init(uint8_t pinNumber,uint8_t portNumber, uint8_t LEDActivatingLogic)			// initiate LED (initiate MCU pin which connected to LED to Be OUTPUT )
{	
	DIO_init( pinNumber, portNumber, OUT);
	LED_Activating_Logic_G =  LEDActivatingLogic;
}



void LED_on(uint8_t pinNumber,uint8_t portNumber)			// write HIGH on LED pin --> to be used as (LED OFF or LED ON) depend on the connected circuit (Active high or Active low Gates/Transistors (Current driver)) 
{
	if(LED_Activating_Logic_G==ACTIVE_HIGH)
	{
		DIO_write(pinNumber , portNumber , HIGH);
	}
	else if(LED_Activating_Logic_G==ACTIVE_LOW)
	{
		DIO_write(pinNumber , portNumber , LOW);
	}
	else
	{
		// Error Handling
	}
		
} // End of Function LED_on()



void LED_off(uint8_t pinNumber,uint8_t portNumber)			// write LOW on LED pin --> to be used as (LED OFF or LED ON) depend on the connected circuit (Active high or Active low Gates/Transistors (Current driver))
{
	if(LED_Activating_Logic_G== ACTIVE_HIGH)
	{
		DIO_write(pinNumber , portNumber , LOW);
	}
	else if(LED_Activating_Logic_G== ACTIVE_LOW)
	{
		DIO_write(pinNumber , portNumber , HIGH);
	}
	else
	{
		// Error Handling
	}
	
}	// End of Function LED_off()





/***********************************************************************/
/*                           END of File                               */
/***********************************************************************/





