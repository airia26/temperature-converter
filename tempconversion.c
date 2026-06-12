#include <stdio.h>

#define F_LOW 0
#define F_HIGH 256
#define STEP 16

int main()

{
  typedef float REAL;
  REAL celsius, fahrenheit;
  char *limit;

  fahrenheit = F_LOW;
  printf("Fahrenheit  Celsius  Limit\n\n");
  while (fahrenheit <= F_HIGH)
  {
    celsius = (fahrenheit - 32) / 1.8;
    if (celsius == 0)
    {
      limit = "Freezing point";
    }
    else
    {
      limit = "Normal";
    }
    printf("%5.2f %10.2f %15s\n", fahrenheit, celsius, limit);
    fahrenheit = fahrenheit + STEP;
  }
return 0;
}