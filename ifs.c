#include <stdio.h>
int main(void){
    int a = 5;
    int b = 5;
    int c = 10;

    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d != %d is %d \n", a, c, a != c);

    //Program that identifies negative numbers
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0){
        printf("%d is a negative number. \n", number);
    } else {
        printf("%d is a positive number. \n", number);
    }
}
