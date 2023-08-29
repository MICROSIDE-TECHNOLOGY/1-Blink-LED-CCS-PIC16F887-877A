/************************************************************************************************
Company:
Microside Technology Inc.
File Name:
Blink led.c
Product Revision  :  1
Device            :  X-TRAINER
Driver Version    :  1.0
************************************************************************************************/

/*
---------------------------------------------------------------------------
La práctica consiste en controlar el encendido y apagado del LED incluido
en la tarjeta X-TRAINER
---------------------------------------------------------------------------
*/

#include <16F887.h>                 //Incluye el microcontrolador con el que se va a trabajar 
#use delay(clock=20Mhz, crystal)    //Tipo de oscilador y frecuencia dependiendo del microcontrolador 

#define LED PIN_A1                  //Pin donde está conectado el LED del X-TRAINER

void main(void) {
   set_tris_a(0xFD);                //Pin RA1 como salida
     
   while(1) {
      output_HIGH (LED);            //Cambio de estado en el pin RA1
      delay_ms (500);               //Retardo
      output_LOW (LED);             //Cambio de estado en el pin RA1     
      delay_ms (500) ;              //Retardo
   }
}
