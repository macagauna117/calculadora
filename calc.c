#include <stdio.h>
#include <stdlib.h>

void calc_sum(int , int);
void calc_res(int , int);

int main( int argc, char *argv[] )  {
  int num1=atoi(argv[1]);
  int num2=atoi(argv[3]);

  if((char)argv[2][0]=='+'){
    calc_sum(num1,num2);
    printf("\n");
  }
  else if ((char)argv[2][0]=='-'){
    calc_res(num1,num2);
    printf("\n");
  }

  return 0;

}


