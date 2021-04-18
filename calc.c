#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calc_sum(int , int);
int calc_res(int , int);
int calc_sumb(int, int);
int calc_resb(int, int);
int decabin(int);

//Verifico que tipo de operacion debo realizar

int main( int argc, char *argv[] )  {

  int num1=0;
  int num2=0;
  char sign='\0';
  char op='\0';
  int aux1 =0;
  int aux2=0;
  int resul=0;



  printf("Ingrese si la operacion será binaria (b) o decimal (d): ");
  scanf("%c", &op);

  printf("Ingrese la operacion con numeros enteros y entre espacios (ej 4 + 5): ");
  scanf("%i %c %i", &num1,&sign , &num2) ;


  if(sign=='+' && op=='d'){
    calc_sum(num1,num2);
    printf("\n");
  }

  else if (sign=='-' && op=='d'){
    calc_res(num1,num2);
    printf("\n");
  }

  else if(sign=='+' && op=='b'){
    resul=calc_sumb(num1,num2);
    printf("%s", "El resultado de sumar ");
    decabin(num1);
    printf("%s", " y ");
    decabin(num2);
    printf("%s", " Es: ");
    decabin(resul);
    printf("\n");
  }

else if(sign=='-' && op=='b'){
    resul=calc_resb(num1,num2);
    printf("%s", "El resultado de restar ");
    decabin(num1);
    printf("%s", " y ");
    decabin(num2);
    printf("%s", " Es: ");
    decabin(resul);
    printf("\n");
  }

  return 0;

}

int decabin (int n){
  if (n) {
    decabin(n / 2);
    printf("%i", n % 2);
  }
}



