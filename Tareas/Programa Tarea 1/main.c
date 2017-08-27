/*
 * Programa Tarea 1.c
 *
 * Created: 27/08/2017 12:07:14 p. m.
 * Author : YR7
 */ 

#include <avr/io.h>


int main(void)
{
	/*Puertos de salida*/
	DDRB=0xFF;	/*Puerto B de salida*/
	PORTB=0xFF;	/*LEDs inician apagados*/
	DDRC=0xFF;	/*Puerto B de salida*/
	PORTC=0xAA;	/*Salidas para simular señales digitales*/
	
	
	/*Puertos de entrada*/
	DDRA=0;	/*Puerto A de entrada*/
	PORTA=0xFF;	/*Resistencias de pull-up activas en puerto A*/
    /* Replace with your application code */

    while (1) 
    {

    }
}

