#include <stdio.h>

int v[100];

int main()
{
  int *p;

  char nome[10];

  n = nome;

  *n = 'J';
  n++;
  *n = 'a';
  n++;
  *n = 'o';
  n++;
  *n = 0;
  n++;
  *n = 'a';
  printf("%s\n", nome);

  n = nome +1;
  strcpy(nome, "maria");
  printf("%s\n", nome);
  printf("%s\n", n);

  scanf("%s", nome);
  printf("%s\n", nome);


  v[0] = 22;
  *v = 22;

  v[50] = 60;
  *(v+50) = 60;

  p =v;
  p = p +1;

  printf("%lu   %lu   %lu   %lu   %lu\n", v,v+1, &p, p, *p);

  return 0;
}
