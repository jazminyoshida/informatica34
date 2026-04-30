#include <stdio.h>
int main(void){
    char item [50];
    float price;
    int quantity;
    printf("item \n");
    printf("%c", &item);

    printf("price \n");
    printf("%f", &price);

    printf("quantity \n");
    printf("%d", &quantity);

    float total = price*quantity;
    printf("\n.");

    printf("item: %c \n", item);
    printf("price: %f \n", price);
    printf("quantity: %d \n", quantity);

}
