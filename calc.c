#include <stdio.h>
#include <stdlib.h>

void calc_sum(int , int);

int main( int argc, char *argv[] )  {

  if((char)argv[2][0]=='+'){
    int num1=atoi(argv[1]);
    int num2=atoi(argv[3]);
    calc_sum(num1,num2);
    printf("\n");
  }

  return 0;

}


