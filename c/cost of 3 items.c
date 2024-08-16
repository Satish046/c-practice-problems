#include<stdio.h>
int main(){
  float price[2];
  printf("print 2 price :");
  scanf("%f", &price[0]);
  scanf("%f", &price[1]);
  printf("total prices : %f \n",price[0]+(0.18*price[0]));     
    printf("total prices : %f \n",price[1]+(0.18*price[1]));    
    return 0;
}