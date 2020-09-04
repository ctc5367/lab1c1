// Author: Cole Carter ctc5367@psu.edu
// Collaborator: Avery Benfield acb6072@psu.edu
// Collaborator: Lizzet Villa lav5229@psu.edu
// Collaborator: John Turnbach jbt5591@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) 
{
  char* temp = readline("Enter temperature in celsius: ");
  double celsius = atof(temp);
  double fahr = (celsius*9/5)+32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", celsius, fahr);
  return 0;
}