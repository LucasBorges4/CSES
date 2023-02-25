#include <stdio.h>
#include <math.h>

int main(){

    long num;
    scanf("%ld", &num);
    printf("%ld ", num);
    while (num != 1){
        if (num % 2 == 1){
            num *= 3;
            num++;
        }
        else if (num % 2 == 0) {
            num/=2;  
        }
        printf("%ld ", num);

    };
    
    printf("\n");
    return 0;
}