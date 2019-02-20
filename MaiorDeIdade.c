#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

  char nome[10];
  int *pIdade;
  int idade;

  pIdade = &idade;



  scanf("%s\n", nome);
  scanf("%s\n", pIdade);
  printf("%s\n", nome);
  printf("%s\n", *pIdade);

  if(idade >= 18){
    printf("Maior de idade\n");
  }else{
    printf("Menor de Idade\n");
  }

}
