#include<18F4620.h> //Se incluye la librer�a del PIC 18F4620
#fuses HS, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT // EL HS es el high speed
#fuses NOPBADEN, NOMCLR, STVREN, NOLVP, NODEBUG
#use delay(clock = 16000000)//frecuencia de reloj en 16 millones

void main(void){
setup_oscillator(OSC_16MHZ); //se establece el clock otra vez.
set_tris_b(0x00);//Con este  comando establecemos  los puertos b en modo salida.
int contador = 1; //La variable.
while(1){
    
    output_b(contador); //La salida que tendr� el PIC.
    
  }

} 