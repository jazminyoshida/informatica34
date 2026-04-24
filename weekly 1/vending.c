#include <stdio.h>
int main(void){
    // Create Variable for first snack(quesadilla)
    float price1 = 129.99;
    int quantity1 = 10;
    char letter1 = 'Q';
    // Create Variables for second snack (Nachos)
    float price2 = 89.99;
    int quantity2 = 15;
    char letter2 = 'N';
    //Create Variable for third snack (French fries)
    float price3 = 79.99;
    int quantity3 = 20;
    char letter3 = 'F';

    //Print tittle
    printf ("Vending Machine Stock"); //Title
    printf("\n");
    printf("---------------------\n");

    //Print variables
    printf("Item name: Quesadilla\n");
    printf("Price: $%.2f \n", price1);
    printf("Quantity: %d \n", quantity1);
    printf("letter: %c \n", letter1);
    printf("\n");
    printf("Item name: Nachos\n");
    printf("Price: $%.2f \n", price2);
    printf("Quantity: %d \n", quantity2);
    printf("letter: %c \n", letter2);
    printf("\n");
    printf("Item name: French Fries\n");
    printf("Price: $%.2f \n", price2);
    printf("Quantity: %d \n", quantity2);
    printf("letter: %c \n", letter1);
}
