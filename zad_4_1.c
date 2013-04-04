//Program oblicza sumę liczb od a do b

#include<stdio.h>
main(){
  int i, a, b, suma=0;
  printf("Program oblicza sumę liczb między a i b.\nPodaj a: ");
  scanf("%d", &a);
  printf("Podaj b: ");
  scanf("%d", &b);
  if (a<b){
	 for (i=1; b>=a;){
	     suma=suma+a;
		 a=a+i;
	 }
	 printf("%d", suma);
  }
  else printf("Podałeś złe liczby!");
}
  

