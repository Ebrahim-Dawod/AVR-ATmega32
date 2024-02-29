/*
 * HelloAVR.c
 */ 


/***********************************************************************/
/*  Build your own driver library (Module)     2. Driver library (.c & .h)      */
/***********************************************************************/


#include "./Application/application.h"



int  main(void)
{
	Application_init();    //  to initiate the Used Peripherals &  Services --> Includes your code that runs once

	Application_run();		// Includes your application code that Runs forever
}

/***********************************************************************/
/*                           END of File                               */
/***********************************************************************/
