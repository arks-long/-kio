#include <stdio.h>

int sum(int a,int b){
    int sum = 0 ;
    sum = a + b ;
    return sum ;
   }

int main(){
    int a = 10 ;
    int b = 5 ;
    int sum_add = sum(a,b) ;
    printf("%d",sum_add) ;
    return 0 ;
}
    
