//Ciąg Fibonacciego

#include <stdio.h>

float fibo(int n){
    if(n < 2){ return n; }
    else{ return fibo(n-1)+fibo(n-2); }
}

int main(){
    
  int n, i;  
  printf("Ciąg Fibonnaciego dla n=20:"); 
   i=20;
  for (n=0;n<=i;n++)
    printf("\nF%d= %.0f", n, fibo(n));    
  printf("\n");
    
}

