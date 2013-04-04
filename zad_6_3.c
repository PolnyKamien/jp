//Parzystość cyfr danej liczby

#include<stdio.h>
main(){
  	int n, reszta=0;
  printf("Podaj n: ");		
  scanf("%d", &n);
  if (n<0) printf("Podałeś złą liczbę!");
  else {
  do {
	 reszta=n%10;
	 n=n/10;
	 if (reszta%2!=0)
		 n=-1;
  }
  while (n>0);
  if (n==0) printf("SĄ PARZYSTE!");
  else printf("NIE SĄ PARZYSTE!");
  } 
}

