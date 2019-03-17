#include <avr/io.h>
#include <util/delay.h>


int main() {
	const uint8_t pin = PB5;
    DDRB |= (1 << pin);
	#if DEBUG
	#endif

    uint32_t i = 1;
    uint32_t j = 0;

    while (i) {
        i = j;

      while (i < 200) {
      	_delay_ms(1);
      	++i;
      }
      j+=1;
      if (j > 199) {
      	j = 0;
      }

      PORTB ^= (1 << pin);
    }
    return 0;
}
