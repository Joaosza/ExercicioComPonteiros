#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

  int idade;
  char nome[10];
  int p;

  *p = idade;

  scanf("%s\n", nome);
  scanf("%s\n", idade);
  printf("%s\n", nome);
  printf("%s\n", idade);

  printf("Informe sua Idade : ");
  scanf("%i", &idade);
  if(idade > 18){
    printf("Maior de idade");
  }else{
    printf("Menor de Idade\n");
  }

}
