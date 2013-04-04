//Wczytaj n i oblicz n!. Zabezpiecz program przed niepoprawnymi danymi. Użyj pętli for.

#include<stdio.h>
 main(){
  int a, i, suma;
  suma=1;
  printf("Program liczy n!. Podaj n: ");
  scanf("%d", &a);
  if (a>=0){
	for(i=1;a>=i;++i){
		suma=suma*i;
	}
	printf("%d\n", suma);
  }
  else printf("Podałeś złą liczbę!\n");
}

