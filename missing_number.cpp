#include <stdio.h>


int main(){
    long int num, sum_incomplet = 0;
    scanf("%ld", &num);

    long int sum_total = (1 + num)*num, entrada;
    sum_total/=2;
    
    for (int i = 1; i < num; i++) {
        scanf("%ld", &entrada);
        sum_incomplet += entrada;
    }

    num = sum_total - sum_incomplet;
    printf("%ld\n", num);

    return 0;
}