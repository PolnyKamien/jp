//Najmniejsza ilość banknotów i monet.

#include<stdio.h>
main(){
   int i; double kwota;
  printf("Podaj kwotę: ");
  scanf("%lf", &kwota);
  printf("\n");
  if (kwota>0 && kwota<=1000000){
/************************************/   
  i=0;
  while (kwota>=200){
     kwota=kwota-200;
	 ++i; 
  }
  if (i>0) printf("200zl x %d\n", i);
/************************************/ 
  i=0;
    while (kwota>=100){
     kwota=kwota-100;
	 ++i; 
  }
  if (i>0) printf("100zl x %d\n", i);
/************************************/  
  i=0; 
    while (kwota>=50){
     kwota=kwota-50;
	 ++i; 
  }
  if (i>0) printf("50zl  x %d\n", i);
/************************************/  
  i=0; 
    while (kwota>=20){
     kwota=kwota-20;
	 ++i; 
  }
  if (i>0) printf("20zl  x %d\n", i);
/************************************/   
  i=0;
    while (kwota>=10){
     kwota=kwota-10;
	 ++i; 
  }
  if (i>0) printf("10zl  x %d\n", i);
/************************************/  
  i=0; 
    while (kwota>=5){
     kwota=kwota-5;
	 ++i; 
  }
  if (i>0) printf("5zl   x %d\n", i);
/************************************/ 
  i=0;  
    while (kwota>=2){
     kwota=kwota-2;
	 ++i; 
  }
  if (i>0) printf("2zl   x %d\n", i);
/************************************/  
  i=0; 
    while (kwota>=1){
     kwota=kwota-1;
	 ++i; 
  }
  if (i>0) printf("1zl   x %d\n", i);
/************************************/
  i=0; 
    while (kwota>=0.5){
     kwota=kwota-0.5;
	 ++i; 
  }
  if (i>0) printf("50gr  x %d\n", i);
/************************************/
  i=0; 
    while (kwota>=0.2){
     kwota=kwota-0.2;
	 ++i; 
  }
  if (i>0) printf("20gr  x %d\n", i);
/************************************/
  i=0; 
    while (kwota>=0.1){
     kwota=kwota-0.1;
	 ++i; 
  }
  if (i>0) printf("10gr  x %d\n", i);
/************************************/
  i=0; 
    while (kwota>=0.05){
     kwota=kwota-0.05;
	 ++i; 
  }
  if (i>0) printf("5gr   x %d\n", i);
/************************************/
  i=0; 
    while (kwota>=0.02){
     kwota=kwota-0.02;
	 ++i; 
  }
  if (i>0) printf("2gr   x %d\n", i);
/************************************/
  i=0; 
    while (kwota>=0.01){
     kwota=kwota-0.01;
	 ++i; 
  }
  if (i>0) printf("1gr   x %d\n", i);
 } 
 else printf("\nPodałeś zła kwotę\n");
}
     

