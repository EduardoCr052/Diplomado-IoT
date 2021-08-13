#include<stdio.h>

int main()
{
    int valor1;
    int valor2;
    int resultado;
int opcion;


  printf("\n 1.Suma");
  printf("\n 2.Resta");
  printf("\n 3.Multiplicacion");
  printf("\n 4.Division\n");
  printf("\nSelecciona la operacion que desea calcular: ");	
	
	scanf("%d",&opcion);
  if(opcion == 1)
  {
    
    printf("\n digite el primer numero:");
    scanf("%d",&valor1);

    printf("\n digite el segundo numero:");
    scanf("%d",&valor2);
    printf("El resultado es: %d",valor1 + valor2);
  }
  
  else if(opcion == 2)
  {
    
    printf("\n digite el primer numero:");
    scanf("%d",&valor1);

    printf("\n digite el segundo numero:");
    scanf("%d",&valor2);
    printf("El resultado es: %d",valor1 - valor2);
  }

  else if(opcion == 3)
  {
    
    printf("\n digite el primer numero:");
    scanf("%d",&valor1);

    printf("\n digite el segundo numero:");
    scanf("%d",&valor2);
    printf("El resultado es: %d",valor1 * valor2);
  }

  else if(opcion == 1)
  {
    
    printf("\n digite el primer numero:");
    scanf("%d",&valor1);

    printf("\n digite el segundo numero:");
    scanf("%d",&valor2);
    printf("El resultado es: %d",valor1 / valor2);
  }

  return 0;
}