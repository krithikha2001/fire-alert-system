/*
 * GccLibrary1.c
 *
 * Created: 02-02-2020 10.11.15 AM
 * Author : krithikha
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>
#include <string.h>
#include <avr/sfr_defs.h>
#define F_CPU_8000000UL

void uart_initial(int BAUDRATE)
{
	UBRR0H |=(unsigned char)(BAUDRATE>>8);
	UBRR0L |=(unsigned char)(BAUDRATE);
	UCSR0B |=(1<<TXEN0)|(1<<RXEN0);
	UCSR0C |=(1<<UCSZ01)|(1<<UCSZ00);
}
void uart_transmit (unsigned char str)
{
	while(!(UCSR0A & (1<<UDRE0)));
	UDR0=str;
}
unsigned char uart_receiver(void)
{
	while(!(UCSR0A & (1<<RXC0)));
	return UDR0;
}
int main(void)
{uart_initial(51);
	char c=uart_receiver();

	while(1)
	{
		uart_transmit(c);
		_delay_ms(1000);
	}



int main(void)
{
	int i=0;
	char beg[]="AT+CMGF=1";
	char st[]="AT+CMGS=\"8610284939\"";
	char msg[]="The gas sensor has detected fire.";
	uart_initial(51);
	if(bit_is_clear(PINA,0)){
	
	while(1)
	{
		_delay_ms(10000);
		while(!(UCSR0A & (1<<UDRE0)));
		for(i=0;i<strlen(beg);i++)
		{
			UDR0=beg[i];
			_delay_ms(100);
		}	UDR0='\r';
		_delay_ms(10000);
		for(i=0;i<strlen(st);i++)
		{
			UDR0=st[i];
			_delay_ms(100);
	    }	UDR0='\r';
		
		_delay_ms(10000);
		for(i=0;i<strlen(msg);i++)
		{
			UDR0=msg[i];
			_delay_ms(100);
		}	UDR0='\r';
		UDR0=(26); //ctrl+z
		break;
		
		//UDR0=st[6];
	//_delay_ms(10000);
	//UDR0="\xla";
	//_delay_ms(10000);
	
		//for(i=0;i<strlen(st);i++)
		//{
			//UDR0=st[i];
			//_delay_ms(1000);
		//}
			//UDR0='\r';
			}
}
/* Replace wbbnhnith your library code */

}




