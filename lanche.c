#include <stdio.h>

int main() {
    int code, amount;
    float price;
    
    scanf("%d %d", &code, &amount);
    
    if (code == 1) {
        price = 4.0;
    } else if (code == 2) {
        price = 4.5;
    } else if (code == 3) {
        price = 5.0;
    } else if (code == 4) {
        price = 2.0;
    } else if (code == 5) {
        price = 1.5;
    } else {
        printf("Código inválido\n");
        return 0;
    }

    float total = price * amount;
    printf("Total: R$ %.2f\n", total);

    return 0;
}
