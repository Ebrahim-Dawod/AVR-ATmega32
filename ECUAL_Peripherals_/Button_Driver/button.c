/*
 * button.c
 *
 * 
 */ 


#include "../Button_Driver/button.h"



static uint8_t Input_Pin_Mode_G;


void Button_init(uint8_t pinNumber,uint8_t portNumber,uint8_t InputPinMode)  // Direction = INPUT
{
	
	switch (InputPinMode)
	 {
	 
		case INTERNAL_PULL_UP_INPUT:
		
			DIO_init(pinNumber,portNumber,INTERNAL_PULL_UP_INPUT);
			break;
			  	 
		default: // cases included : EXTERNAL_PULL_UP_INPUT , EXTERNAL_PULL_DOWN_INPUT , NO_PULL_BUTTON_TO_GROUND_INPUT , NO_PULL_BUTTON_TO_VCC_INPUT
			
			DIO_init(pinNumber,portNumber,IN); 
			break;
			
	 }	//End of switch
			
Input_Pin_Mode_G = InputPinMode; // transmit Value of InputPinMode to outside of this function	
					
}// End of Function  Button_init()





void Button_read(uint8_t pinNumber,uint8_t portNumber,uint8_t *ButtonState)		// get Button state (whether Pressed or Not Pressed) (will be gotten using ButtonState pointer value)
{
	
	 uint8_t input_value;
	 //uint8_t* InputPinMode =&direction ; //Initialize Value of pinMode

	 DIO_read(pinNumber, portNumber, &input_value); // read dio
	 
	 switch (Input_Pin_Mode_G)
	 {
	 
	 //*ButtonState = PRESSED;
	 //*ButtonState = NOT_PRESSED;
	 
		case INTERNAL_PULL_UP_INPUT :
			
			if(input_value==HIGH)
			{
				*ButtonState = NOT_PRESSED;
			}
			else if (input_value==LOW)
			{
				*ButtonState = PRESSED;
			}
			else
			{
				//Error Handling
			}
			break;
		////////////////// 
		case EXTERNAL_PULL_UP_INPUT:
		
			if(input_value==HIGH)
			{
				*ButtonState = NOT_PRESSED;
			}
			else if (input_value==LOW)
			{
				*ButtonState = PRESSED;
			}
			else
			{
				//Error Handling
			}
			break;
		///////////////
		case EXTERNAL_PULL_DOWN_INPUT :
		
			if(input_value==HIGH)
			{
				*ButtonState = PRESSED;
			}
			else if (input_value==LOW)
			{
				*ButtonState = NOT_PRESSED;
			}
			else
			{
				//Error Handling
			}
			break;
		/////////////////
		case NO_PULL_BUTTON_TO_GROUND_INPUT :	//this Button connection is Not Recommended Because it will Leave the Pin in a floating state (Not Logic HIGH Nor LOW) it will expose the pin to Noise (Noise will send a False PRESSED Status)
			
			if(input_value==LOW)
			{
				*ButtonState = PRESSED;
			}
			
			else
			{
				*ButtonState = NOT_PRESSED;
			}
			break;
		//////////////////////
		case NO_PULL_BUTTON_TO_VCC_INPUT : //this Button connection is Not Recommended Because it will Leave the Pin in a floating state (Not Logic HIGH Nor LOW) it will expose the pin to Noise (Noise will send a False PRESSED Status)

			
			if(input_value==HIGH)
			{
				*ButtonState = PRESSED;
			}
			
			else
			{
				*ButtonState = NOT_PRESSED;
			}
			break;
			
	 }//End of switch
	 
}// End of Function  Button_read()




/***********************************************************************/
/*                           END of File                               */
/***********************************************************************/




