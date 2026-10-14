#include<stdio.h>

int main(){
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   int profit = (b-c)*a - 100;
   printf("%d",profit);
    return 0; 
}