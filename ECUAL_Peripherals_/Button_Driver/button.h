/*
 * button.h
 *
 * 
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_


#include "./MCAL/DIO_Driver/dio.h"



// Button States : Pressed , Not Pressed , LONG PRESS


#define NOT_PRESSED 0
#define PRESSED 1



// Input pin Modes


#define IN 0
//#define OUT 1	
#define INTERNAL_PULL_UP_INPUT 2		//Internally pulled up input pin mode is --> Built inside the MCU without any external pulling circuit // Supported Feature Activation 
#define EXTERNAL_PULL_UP_INPUT 3		
#define EXTERNAL_PULL_DOWN_INPUT 4		
#define NO_PULL_BUTTON_TO_VCC_INPUT 5		//Not Recommended for a Button Use Because of exposed to Noise (Noise will send a False PRESSED Status)
#define NO_PULL_BUTTON_TO_GROUND_INPUT 6	//Not Recommended for a Button Use Because of exposed to Noise (Noise will send a False PRESSED Status)


/*
// Input pin Modes:
------------------

1- when button connected between the MCU & Ground:  (no internal pull-up) (no external pull-up or pull-down) //Not Recommended for a Button Use Because of Button exposure to Noise (Noise will send a False PRESSED Status)
2- when button connected between the MCU & VCC :  (no internal pull-up) (no external pull-up or pull-down)  //Not Recommended for a Button Use Because of Button exposure to Noise (Noise will send a False PRESSED Status)

3- when internal pull-up Pin Feature activated 
4- when connecting external pull-up Circuit
5- when connecting external pull-down Circuit
*/











/*

Let’s think for a second, how a button press is detected:
--------------------------------------------------------
Initial State:
-------------
	 a button-press typically consists of a “normally-open switch ”, which through a pull-up/down resistor, is normally “high” or normally ‘low’: this is the initial state.
Press Event: 
-----------
	 then, when the button is pressed, the switch is closed and the signal transitions towards the opposite state (e.g, low for normally “high” state), and it’s sustained for as long as the button is held by the user.
Release Event:
-------------
	 Finally, when the button is released, it goes back to its initial state.

*/



// TODO

/* functions of the button:

1- Not Pressed 
2- Pressed
3- Pressed & Hold(Long Time)		//TODO_Advanced  need to learn Timer , Interrupt

----------------------------------------
- develop a way to handle bouncing & noise


---------------------------------------------------------------------------------------------------------------
1- when button connected between the MCU & Ground: (Normal case) (no internal pull-up)  
----------------------------------------------

//this Button connection is Not Recommended Because it will Leave the Pin in a floating state (Not Logic HIGH Nor LOW) it will expose the pin to Noise (Noise will send a False PRESSED Status)


	- when Not Pressed :
		input logic is mostly (Unknown State)(High Impedance) (Because of Environment Noise will make it High even if it is Not Pressed)
	 
	- when Pressed :
		input logic is Low (Ground)(0 Volt)
	
	- when Pressed (Long Time):
	Input Logic is Low (Ground)(0 Volt) (Long Time)
	 
---------------------------------------------------------------------------------------------------------------
2- when button connected between the MCU & VCC : (Normal case) (no internal pull-up) (no external pull-up or pull-down)  
--------------------------------------------
//this Button connection is Not Recommended Because it will Leave the Pin in a floating state (Not Logic HIGH Nor LOW) it will expose the pin to Noise (Noise will send a False PRESSED Status)


	- when Not Pressed :
		Input Logic is mostly Low (Why?.....)
	
	
	- when Pressed :
		Input Logic is High

	- when Pressed (Long Time):
		Input Logic is High (Long Time)


---------------------------------------------------------------------------------------------------------------
3- when internal pull-up Pin Feature activated :
--------------------------------
//this Button connection is Highly Recommended (Doesn't need adding excessive External component except the button itself)

	- when Not Pressed :
		Input Logic is High
	
	- when Pressed :
		Input Logic is Low
		
	- when Pressed (Long Time):
		Input Logic is Low (Long Time)


---------------------------------------------------------------------------------------------------------------
4- when connecting external pull-up Circuit: 
-----------------------------------------
//this Button connection is Recommended


	- when Not Pressed :
		Input Logic is High
	
	- when Pressed :
		Input Logic is Low
		
	- when Pressed (Long Time):
		Input Logic is Low (Long Time)


---------------------------------------------------------------------------------------------------------------
5- when connecting external pull-down Circuit: 
-------------------------------------------
//this Button connection is Recommended

	- when Not Pressed :
		Input Logic is Low
	
	- when Pressed :
		Input Logic is High

	- when Pressed (Long Time):
		Input Logic is High (Long Time)


*/


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Button_init(uint8_t pinNumber,uint8_t portNumber,uint8_t InputPinMode);  // Direction = INPUT

void Button_read(uint8_t pinNumber,uint8_t portNumber,uint8_t *ButtonState); // get Button state (whether Pressed or Not Pressed) (will be gotten using ButtonState pointer value)




#endif /* BUTTON_H_ */

/***********************************************************************/
/*                           END of File                               */
/***********************************************************************/
