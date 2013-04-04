//Sprawdzanie czy liczba jest automorficzna

#include<stdio.h>
void czy_automorficzna (long long int n){
	 int suma; int pocz_wartosc; int reszta; int i;
	 suma=0; pocz_wartosc=n; reszta=0; i=1;
	 n=n*n;
	 while (n>suma){
         reszta=n%10;
         n=n/10;
         suma=suma+reszta*i;
         i=i*10;
	 }
	   if (suma==pocz_wartosc && pocz_wartosc>0) printf("\nTAK\n");
	   else printf("\nNIE\n");
}
main(){
        long long int n;
  printf("Podaj liczbę: "); 
//!!!!!!!!Na gcc pod Windowsem korzystalem z %I64u - pod Linuxa "%lld" powinien dzialac
  scanf("%I64u", &n);  
  czy_automorficzna(n);
}

