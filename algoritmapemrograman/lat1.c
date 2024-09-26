#include<stdio.h>

int main(){

int baris;
int kolom;

printf("input baris segitiga : ");
fflush(stdin);
scanf("%d", &baris);
printf("input kolom segitiga : ");
fflush(stdin);
scanf("%d", &kolom);
for(int i = 1; i < baris; i++ ){
  for(int j = 0; j < i; j++){
  printf("*");
}
printf("\n");
}

return 0;
}
