#include <stdio.h>
int main(){
    int s;
    scanf("%d", &s);
   if(s%3 ==0) printf("\nchia het cho 3");
   if(s%5 ==0) printf("\nchia het cho 5");
   if((s%3==0) && (s%5==0)) printf("\nchia cho ca 5 va 3");
}