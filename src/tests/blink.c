/*
 * blink.c:
 *	Standard "blink" program in wiringPi. Blinks an LED connected
 *	to the first GPIO pin.
 *
 * Copyright (c) 2012-2013 Gordon Henderson. <projects@drogon.net>
 ***********************************************************************
 * This file is part of wiringPi:
 *	https://projects.drogon.net/raspberry-pi/wiringpi/
 *
 *    wiringPi is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU Lesser General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    wiringPi is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public License
 *    along with wiringPi.  If not, see <http://www.gnu.org/licenses/>.
 ***********************************************************************
 */

#include <stdio.h>
#include <wiringPi.h>
#include "../RaspBot.h"

int main (void)
{
  printf("Raspberry Pi blink\n[Press Ctrl-C to exit]\n");

  wiringPiSetup();
  pinMode(PIN_LED, OUTPUT);

  for ( ; ; ) {
    digitalWrite(PIN_LED, HIGH);	// On
    printf("LED ON\n");
    delay(500);				// mS
    digitalWrite(PIN_LED, LOW);		// Off
    printf("LED OFF\n");
    delay(500);
  }
  return 0;
}
