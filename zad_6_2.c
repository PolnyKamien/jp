//Napisać program obliczający sumę cyfr zadanej liczby naturalnej. Zabezpiecz program przed 
//niepoprawnymi danymi. Użyj pętli do-while.

#include<stdio.h>
main(){
  int suma, reszta, liczba;
  printf("Program dodaje do siebie cyfry danej liczby naturalnej. \nPodaj liczbę ");
  scanf("%d", &liczba);
  suma=0; reszta=0;
  if (liczba>0){
	do {
		reszta=liczba%10;
		liczba=liczba/10;
		suma=suma+reszta;
	}
  while (liczba>0);
  printf("%d\n", suma);
  }
  else printf("Podałeś złą liczbę!\n");

}

