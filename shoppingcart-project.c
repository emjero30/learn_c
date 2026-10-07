#include <stdio.h>
#include <string.h>
 
int main() { //Shopping Cart Program
    
    //declare variables
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    //input for item, price, and quantity
    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    //get total
    total = price*quantity;
    
    //output
    printf("You have bought %d %s/s\nThe total is: %c%.2f", quantity, item, currency, total);
    
    return 0;
}