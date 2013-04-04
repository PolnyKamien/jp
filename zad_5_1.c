//Wczytaj liczby naturalne a i b. Narysuj z gwiazdek kontur prostokątną o a wierszach i b kolumnach.
//Zabezpiecz program przed niepoprawnymi danymi. Użyj pętli while.

#include<stdio.h>
main(){
  	int a, b, i, j;
  i=0; j=0;
  printf("Pogram rysuje prostokąt o wymiarach a x b. Podaj a: ");
  scanf("%d", &a);
  printf("Podaj b: ");
  scanf("%d", &b);
  if (b<1 || a<1) printf("Podałeś złe wartości!\n");
  while (a>=1 && b>=1 && a>i){
     printf("*");
     ++i;
  } 
  i=0;
  while (b>i+2){
	 printf("\n*");
	 while (a>j+2){
		printf(" ");
		++j;
	 }
	 printf("*");
	 ++i;
	 j=0;
  }
  printf("\n");
  i=0;
  while (a>=1 && b>=1 && a>i){
	 printf("*");
	 ++i;
  }
  printf("\n");
}

