#include "stdio.h"

int main(){
    int num1;
    printf("Enter a number: ");
    scanf("%i", &num1);
    for(int i = 1; i <= 10; i++){
        printf(" %i x %i = %i\n", num1, i, num1 * i);
    }
}