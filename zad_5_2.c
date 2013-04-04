//Trójkąt prostokątny

#include<stdio.h>
main(){
  	int h, i, j;
		i=0; j=0;
  printf("Podaj wysokość: ");		
  scanf("%d", &h); printf("\n");
  if (h>1){
     if (i==0){
		 while (h>i){
			 printf("*");
			 ++i;
		 }
	 }	 
	 i=0;
	 while (h-1>i){
		 printf("\n*");
		 while (h-3>j){
			 printf(" ");
			 ++j;
		 }
		 if (h-2>i)
			 printf("*");
		 ++i;
		 j=i;
	 }
  printf("\n");
  }
  else printf("Podałeś złą liczbę!\n");
}

