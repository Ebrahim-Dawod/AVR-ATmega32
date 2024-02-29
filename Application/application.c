/*
 * application.c
 *
 * this module application.c works the same as main.c but to make main.c less crowded
 *
 *
 *  
 */ 

#include "./Application/application.h"



static uint8_t ButtonState=0;




void Application_init()			 //  to initiate the Used Peripherals &  Services --> Includes your code that runs once
{
	
	

	for(uint8_t pinNumber=0; pinNumber<8;pinNumber++)
	{
		LED_init(pinNumber,PORT_D, ACTIVE_HIGH);
	}
	
	
	
	LED_init(1,PORT_B, ACTIVE_HIGH);
	
	LED_init(5,PORT_B, ACTIVE_HIGH);

	for(uint8_t pinNumber=0;pinNumber<8;pinNumber++)
	{
		Button_init(pinNumber,PORT_A,INTERNAL_PULL_UP_INPUT);
	}

	
}// End of Application_init()








void Application_run()			// Includes your application code that Runs forever 
{


    /* Replace with your application code */
    while (1) 
    {
		for(uint8_t pinNumber=0; pinNumber<8; pinNumber++)
		{
			Button_read(pinNumber,PORT_A,&ButtonState); 
			
			if(ButtonState==PRESSED)
			{			
				LED_on(pinNumber,PORT_D);
			}
			else  // ButtonState==NOT_PRESSED
			{
				LED_off(pinNumber,PORT_D);
			}
		} // End of for
		
			/*
		_delay_ms(300);
		DIO_toggle( 5, PORT_B) ; // need DIO_init first
		_delay_ms(300);
		*/
		
		
    }	// End of  while()


}	// End of Application_run()



/***********************************************************************/
/*                           END of File                               */
/***********************************************************************/



//DIO_init(1, PORT_B, OUT);
//DIO_init(5, PORT_B, OUT);


//PORTA |=(1<<0); // activate Pull up Resistor
//PORTA |=(1<<1);




	/*
	DIO_init(0, PORT_A, INTERNALLY_PULLED_UP_INPUT);
	DIO_init(1, PORT_A, INTERNALLY_PULLED_UP_INPUT);
	DIO_init(2, PORT_A, INTERNALLY_PULLED_UP_INPUT);
	DIO_init(3, PORT_A, INTERNALLY_PULLED_UP_INPUT);
	DIO_init(4, PORT_A, INTERNALLY_PULLED_UP_INPUT);
	DIO_init(5, PORT_A, INTERNALLY_PULLED_UP_INPUT);
	DIO_init(6, PORT_A, INTERNALLY_PULLED_UP_INPUT);
	DIO_init(7, PORT_A, INTERNALLY_PULLED_UP_INPUT);
		*/



//DDRA |= (1<<2);    // Set direction of pin 2 in port A as an output
	//DDRA |= (1<<6);    // Set direction of pin 6 in port A as an output
	//DIO_init(2, PORT_D, OUT);
	//DIO_init(6, PORT_A, OUT);
	// 1. Set Direction of Pin 3 in Port B as Output
	//DDRB |= (1<<3);
	//DIO_init(3, PORT_B, OUT);
	
	// Clear Bit 0 , 1 in port A to be inputs
	//DDRA &= ~(1<<0); 
	//DDRA &= ~(1<<1);
	//DIO_init(0, PORT_A, IN);
	//DIO_init(1, PORT_A, IN);
	
/*
	DIO_init(0, PORT_D, OUT);
	DIO_init(1, PORT_D, OUT);
	DIO_init(2, PORT_D, OUT);
	DIO_init(3, PORT_D, OUT);
	DIO_init(4, PORT_D, OUT);
	DIO_init(5, PORT_D, OUT);
	DIO_init(6, PORT_D, OUT);
	DIO_init(7, PORT_D, OUT);
	*/

///////////////////////////////////////////////////////////////////////////////////////////////

/*
		int x = 0 , y = 0;
		
		
		
		
		
		//DIO_read(pinNumber, PORT_A, &ButtonState);
		//DIO_write(pinNumber, PORT_D , HIGH);
		//DIO_write(pinNumber, PORT_D , LOW);
		//DIO_write(pinNumber, PORT_D , LOW);
		//DIO_write(pinNumber, PORT_D , LOW);
		 
		
		
		// PORTA |=(1<<2);         //write high on pin 2 port A     // Set Bit
		// PORTA &= ~(1<<6);         //write low on pin 6 port A    // Clear Bit
		
		DIO_write(2, PORT_A, HIGH);
		DIO_write(6, PORT_A, LOW);
		
		//PORTB ^=(1<<3); // Toggle Bit 3  Timing: As fast as you Execute all instructions inside while loop then come again to Toggle instruction (repetitive unknown Time)
		// TODO
		
		x=((PINA&(1<<0))>>0);
		y=((PINA&(1<<1))>>1);
		
		
		
		
		if(x==0)
		{
			// 2. Toggle Pin 3 of port B
			// Set then Clear bit 3
			
				//	PORTB |= (1<<3);
			DIO_write(3, PORT_B, HIGH);
			_delay_ms(300);
				//  PORTB &=~(1<<3);
			DIO_write(3, PORT_B, LOW);
			_delay_ms(300);
		}
		
		else if (y==0)
		{
						// PORTB &=~ (1<<3);
				DIO_write(3, PORT_B, LOW);
				
				
		}
		
		*/
		















