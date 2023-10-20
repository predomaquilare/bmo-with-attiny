#include <Arduino.h>

/*
PWM: D0,D1,D3 and D4
Analog inputs: D2, D3 and D4
Extern interruptions: D2
I²C: D0(SDA) and D2(SCL)
SPI: D0(MOSI), D1(MISO) and D2(SCLK)

REGISTERS
PORTxn = PB5 --> PB0  // 6 BITS IO  00111111
DDxn
PINxn
*/

#define bot1 
#define SDA PB0
#define SCL PB2 

void setup() {
  DDRB |= (<<PB)
}

void loop() {

}

