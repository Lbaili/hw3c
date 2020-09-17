#include <stdio.h>

// Author: Chang Li cxl5844@psu.edu
// Collaborator: Daniel Mikita djm6907@psu.edu
// Collaborator: John O’Toole jbo5232@psu.edu
// Section: 1
// Breakout: 8

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n) {
  if  (n < 10){
    return n;
  }
  else {
    return (n%10+digit_sum(n/10));
  }

}

int main(void) {
  int a = atof(readline("Enter an int: "));
  printf("sum of digits of %d is %d.\n",a,digit_sum(a));
  return 0;
}