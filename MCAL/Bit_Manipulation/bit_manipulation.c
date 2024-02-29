/*
 * bit_manipulation.c
 *
 * SET, CLEAR, Toggle Bit
 *
 */ 


#include "./MCAL/Bit_Manipulation/bit_manipulation.h"








void set_bit(uint8_t pinNumber,volatile uint8_t *portName)	// write 1 on this pin
{
	*portName |= (1<<pinNumber); // write 1 on this pin
	
}//End of function set_bit()


void clear_bit(uint8_t pinNumber,volatile uint8_t *portName) // write 0 on this pin
{
	*portName &= ~(1<<pinNumber); // write 0 on this pin
	
}//End of  function clear_bit()


void get_bit(uint8_t pinNumber,volatile uint8_t *portName,uint8_t **value)
{
**value =(((*portName)&(1<<pinNumber))>>pinNumber); // read this bit (get state)

}



void toggle_bit(uint8_t pinNumber,volatile uint8_t *portName) // toggle bit value (0 <-> 1)
{
	*portName ^=(1<<pinNumber); // Toggle Bit    ( ^ XOR ) (1 XOR 1 = 0) (0 XOR 1 = 1)
			
}//End of function toggle_bit()







/***********************************************************************/
/*                           END of File                               */
/***********************************************************************/




















