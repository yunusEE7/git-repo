#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>

//code to turn on led on arduino
int main(void) {
	
	uint8_t *pDDRB = (uint8_t*)(0x24);
	uint8_t *pPORTB = (uint8_t*)(0x25);
	
	*pDDRB |= ( 1 << 5 );
	
	while(1) {
		//uint32_t i=0;
		*pPORTB |= ( 1 << 5 );
		
		//for(i=0; i<=75000; i++);
		_delay_ms(1000);
		
		*pPORTB &= ~( 1 << 5 );
		
		//for(i=0; i<=75000; i++);
		_delay_ms(1000);
		
	}
	
	return 0;
	
}