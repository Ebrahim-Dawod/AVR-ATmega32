/*
 * application.h
 *
 * this module application.c works the same as main.c but to make main.c less crowded
 *  
 */ 


#ifndef APPLICATION_H_
#define APPLICATION_H_



#include "./Utilities/registers_atmega32.h"
#include "./main.h"
#include "./MCAL/DIO_Driver/dio.h"
#include "./ECUAL_Peripherals_/LED_Driver/LED_diode.h"
#include "./ECUAL_Peripherals_/Button_Driver/button.h"
//#include <avr/io.h>
#include <util/delay.h>




void Application_init();    //  to initiate the Used Peripherals &  Services --> Includes your code that runs once

void Application_run();		// Includes your application code that Runs forever   






#endif /* APPLICATION_H_ */

/***********************************************************************/
/*                           END of File                               */
/***********************************************************************/
