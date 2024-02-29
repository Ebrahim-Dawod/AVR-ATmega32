/*
 * LED.c
 *
 * 
 */ 


#include "../LED_Driver/LED_diode.h"





static uint8_t LED_Activating_Logic_G;
//Scope of this Global variable is seen inside and out side of all of functions -- but only for this file Because of "static"  

void LED_init(uint8_t pinNumber,uint8_t portNumber, uint8_t LEDActivatingLogic)			// initiate LED (initiate MCU pin which connected to LED to Be OUTPUT )
{	
	DIO_init( pinNumber, portNumber, OUT);
	LED_Activating_Logic_G =  LEDActivatingLogic;
}



void LED_on(uint8_t pinNumber,uint8_t portNumber)	// write HIGH/LOW on LED pin --> to be used as (LED OFF or LED ON) depend on the connected circuit (Active high or Active low Gates/Transistors (Current driver)) 
{
	
	DIO_write(pinNumber , portNumber , LED_Activating_Logic_G); // LED_Activating_Logic_G : ACTIVE_HIGH=1=HIGH / ACTIVE_LOW=0=LOW
	/*
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
	*/
		
} // End of Function LED_on()



void LED_off(uint8_t pinNumber,uint8_t portNumber)			//to turn LED OFF we should write LOW/HIGH on LED pin -->  depend on the connected circuit (Active high or Active low Gates/Transistors (Current driver))
{
	
	DIO_write(pinNumber , portNumber , !LED_Activating_Logic_G);  // LED_Activating_Logic_G : ACTIVE_HIGH=1=HIGH / ACTIVE_LOW=0=LOW
	
	/*
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
	*/
	
}	// End of Function LED_off()



void LED_toggle(uint8_t pinNumber,uint8_t portNumber)  //toggle LED (on <-> off)
{	
	DIO_toggle( pinNumber, portNumber);
}





/***********************************************************************/
/*                           END of File                               */
/***********************************************************************/





