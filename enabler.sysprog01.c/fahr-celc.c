#include <stdio.h>

void main () {
  /* Declare fahrenheit and celcius variable with no value as integer */
  float fahr, celc;
  /* Declare first value, last value, and step */
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    celc = (5.0 / 9.0) * (fahr - 32.0);
    // printf("Fahrenheit = %3f Celcius = %6f\n", fahr, celc);
    printf("%3.0f %6.1f\n", fahr, celc);
    fahr += step;
  }
}