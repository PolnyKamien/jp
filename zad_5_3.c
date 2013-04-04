//Kontur trójkąta równoramiennego 

#include<stdio.h>
main(){
int h, i, j, k, l, w;
i=0; j=0; k=1; w=2;
printf("Podaj wysokość trójkąta\n");
scanf("%d",&h);
l=h-1;
if (h>1){
i=0;
while (l>i){ //puste pola dla wierzchołka trójkata
printf(" ");
++i;
}
printf("*\n"); //wierzchołek
i=0;
l=l-1;
while (h>w){ //w - licznik pętli
while (l>i){ //drukowanie pustych miejsc
printf(" ");
++i;
}
printf("*"); //"*" z lewej strony
i=0;
while (k>j){ //puste miejsca między gwiazdkami
printf(" ");
++j;
}
printf("*"); //gwiazdka z prawej strony
k=k+2;
l=l-1;
++w;
j=0;
printf("\n");
}
}

i=0;
if (h>1){
while (2*h-1>i){ //podstawa trójkąta
printf("*");
++i;
}
}
printf("\n");

if (h<=1)
printf("Podana wyskość jest nieprawidłowa\n");
}

