/*
 * dio.c
 *
 * 
 * 
 */ 
//             what should i write here ?

// include  .h used files (include lower layer drivers)

#include "./MCAL/DIO_Driver/dio.h"





// global variables (extern / static)


//TODO
void DIO_init(uint8_t pinNumber,uint8_t portNumber,uint8_t direction) // Initialize DIO Pin Mode Direction(IN/OUT) //see these pages for parameter's default value https://stackoverflow.com/questions/1472138/c-default-arguments   https://modelingwithdata.org/arch/00000022.htm
{

	
	

	switch(portNumber)
	{
		case PORT_A : 
			if(direction==OUT)
			{
				DDRA |= (1<<pinNumber); // make pin direction -> output
			}
			else if(direction==IN)
			{
				DDRA &= ~(1<<pinNumber); // make pin direction -> input
			}
			else if (direction == INTERNALLY_PULLED_UP_INPUT)
			{	
				DDRA &= ~(1<<pinNumber); // make pin direction -> input
				PORTA |=(1<<pinNumber);		// activate Internal Pull up Resistor (inside MCU , no external Pulling circuitry)
				
				//SFIOR &= ~(1<<PUD);    // "PUD" Pull Up Disable Bit 2 --> inside Special Function Input Output Register ->initial Value 0 to NOT Disable Pull Up Across all the Ports A,B,C,D
		
			}
						
			else 
			{
				// Error Handling
				//Make "DIO_init"function Return Error Value  if exist or return  OK or a Number if Succeeded 
			}
			break;
		
		case PORT_B :
			
			if(direction==OUT)
			{
				DDRB |= (1<<pinNumber); // make pin direction -> output
			}
			else if(direction==IN)
			{
				DDRB &= ~(1<<pinNumber); // make pin direction -> input
			}
			else if (direction == INTERNALLY_PULLED_UP_INPUT)
			{	
				DDRB &= ~(1<<pinNumber); // make pin direction -> input
				PORTB |=(1<<pinNumber);		// activate Internal Pull up Resistor (inside MCU , not external circuitry)
			}
			
			else
			{
				// Error Handling
				//Make "DIO_init"function Return Error Value  if exist or return  OK or a Number if Succeeded
			}
			break;
			
		case PORT_C :
		
			if(direction==OUT)
			{
				DDRC |= (1<<pinNumber); // make pin direction -> output
			}
			else if(direction==IN)
			{
				DDRC &= ~(1<<pinNumber); // make pin direction -> input
			}
			else if (direction == INTERNALLY_PULLED_UP_INPUT)
			{	
				DDRC &= ~(1<<pinNumber); // make pin direction -> input
				PORTC |=(1<<pinNumber);		// activate Internal Pull up Resistor (inside MCU , not external circuitry)
			}
			
			else
			{
				// Error Handling
				//Make "DIO_init"function Return Error Value  if exist or return  OK or a Number if Succeeded
			}
			break;
		
		case PORT_D :
			
			if(direction==OUT)
			{
				DDRD |= (1<<pinNumber); // make pin direction -> output
			}
			else if(direction==IN)
			{
				DDRD &= ~(1<<pinNumber); // make pin direction -> input
			}
			else if (direction == INTERNALLY_PULLED_UP_INPUT)
			{	
				DDRD &= ~(1<<pinNumber); // make pin direction -> input
				PORTD |=(1<<pinNumber);		// activate Internal Pull up Resistor (inside MCU , not external circuitry)
			}
			
			else
			{
				// Error Handling
				//Make "DIO_init"function Return Error Value  if exist or return  OK or a Number if Succeeded
			}
			break;
		
		
	} // End of switch


} // End of Function -> DIO_init




void DIO_write(uint8_t pinNumber,uint8_t portNumber,uint8_t value) //write on dio pin
{

	switch(portNumber)
	{
		case PORT_A :
			if(value==HIGH)
			{
				PORTA |= (1<<pinNumber); // write 1 on this pin
			}
			else if(value==LOW)
			{
				PORTA &= ~(1<<pinNumber); // write 0 on this pin
			}
			else
			{
				// Error Handling
				//Make "DIO_init"function Return Error Value  if exist or return  OK or a Number if Succeeded
			}
			break;
		
		case PORT_B :
	
			if(value==HIGH)
			{
				PORTB |= (1<<pinNumber); // write 1 on this pin
			}
			else if(value==LOW)
			{
				PORTB &= ~(1<<pinNumber); // write 0 on this pin
			}
			else
			{
				// Error Handling
				//Make "DIO_init"function Return Error Value  if exist or return  OK or a Number if Succeeded
			}
			break;
		case PORT_C :
	
			if(value==HIGH)
			{
				PORTC |= (1<<pinNumber); // write 1 on this pin
			}
			else if(value==LOW)
			{
				PORTC &= ~(1<<pinNumber); // write 0 on this pin
			}
			else
			{
				// Error Handling
				//Make "DIO_init"function Return Error Value  if exist or return  OK or a Number if Succeeded
			}
			break;
	
		case PORT_D :
	
			if(value==HIGH)
			{
				PORTD |= (1<<pinNumber); // write 1 on this pin
			}
			else if(value==LOW)
			{
				PORTD &= ~(1<<pinNumber); // write 0 on this pin
			}
			else
			{
				// Error Handling
				//Make "DIO_init"function Return Error Value  if exist or return  OK or a Number if Succeeded
			}
			break;
	



	} //End of switch

} // End of Function -> DIO_write




void DIO_read(uint8_t pinNumber,uint8_t portNumber,uint8_t *value) // read dio pin (get pin status)
{
	
	switch(portNumber)
	{
		case PORT_A :
		
			*value =((PINA&(1<<pinNumber))>>pinNumber); // read this pin (get state)
			break;
		
		case PORT_B :
			
			*value =((PINB&(1<<pinNumber))>>pinNumber); // read this pin (get state)
			break;
			
		case PORT_C :
		
			*value =((PINC&(1<<pinNumber))>>pinNumber); // read this pin (get state)
			break;
		
		case PORT_D :
		
			*value =((PIND&(1<<pinNumber))>>pinNumber); // read this pin (get state)
			break;
		

	

	} //End of switch

} // End of Function -> DIO_read




//TODO
void DIO_toggle(uint8_t pinNumber,uint8_t portNumber) // toggle output of dio pin
{
	
	
		switch(portNumber)
		{
			case PORT_A :
			
				PORTA ^=(1<<pinNumber); // Toggle Bit    ( ^ XOR ) (1 XOR 1 = 0) (0 XOR 1 = 1)
				break;
			
			case PORT_B :
			
				PORTB ^=(1<<pinNumber); // Toggle Bit    ( ^ XOR ) (1 XOR 1 = 0) (0 XOR 1 = 1)	
				break;
			
			case PORT_C :
			
				PORTC ^=(1<<pinNumber); // Toggle Bit    ( ^ XOR ) (1 XOR 1 = 0) (0 XOR 1 = 1)	
				break;
			
			case PORT_D :
			
				PORTD ^=(1<<pinNumber); // Toggle Bit    ( ^ XOR ) (1 XOR 1 = 0) (0 XOR 1 = 1)	
				break;
		} //End of switch

}// End of Function -> DIO_toggle



/***********************************************************************/
/*                           END of File                               */
/***********************************************************************/




































