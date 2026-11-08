#include <stdio.h>

int main() {
    int price;
    
    price = 20;
    printf("price is %d\n", price);

    price = price + 10;
    printf("price is %d\n", price);

    price += 10;
    printf("price is %d\n", price);

    price ++;
    printf("price is %d\n", price);

    price --;
    printf("price is %d\n", price);
    return 0;
}
