//Pogram liczy 2^n

#include<stdio.h>
main(){
  	int n, i, wynik=1;
  printf("Podaj wykładnik: ");
  scanf("%d", &n);
  if (n>=0){
	 for (i=0; n>i; ++i)
		 wynik=wynik*2;
  printf("%d", wynik);
  }
  else printf("Podałeś złą liczbę!");
}

