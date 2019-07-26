#include <stdio.h>

int main(){
    float price;
    int quantity;
    printf("What is the price of the gear? ");
    scanf("%f", &price);
    printf("What is the quantity of the gear? ");
    scanf("%i", &quantity);
    printf("%i", quantity);
    printf("The total revenue is: $%.2f\n", price * quantity);

    float rate, salePrice, cost;
    printf("What is the rate of commission? ");
    scanf("%f", &rate);
    printf("What is the sales price of the product? ");
    scanf("%f", &salePrice);
    printf("What is the cost of the product? ");
    scanf("%f", &cost);
    printf("The total commission is: $%.2f\n", rate * (salePrice - cost));

    return 0;
}