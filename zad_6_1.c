//Suma kolejnych liczb podzielnych przez 13 (do while)
//Kompilator: MinGW
#include<stdio.h>
main(){
  	int n, suma=0;
  printf("Podaj n: ");		
  scanf("%d", &n);
  if (n>=0){
  do {
	 suma=suma+13*n;
	 --n;
  }
  while (n>0);
  printf("%d", suma);
  }
  else printf("Podałeś złą liczbę!");
}

