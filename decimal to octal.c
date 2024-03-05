#include <stdio.h>

void decimalToOctal(int decimalNumber) {
    int octalNumber[32]; 
    int i = 0;

    while (decimalNumber > 0) {
        octalNumber[i] = decimalNumber % 8;
        decimalNumber = decimalNumber / 8;
        i++;
    }

    printf("Octal equivalent: ");
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octalNumber[j]);
    }

    printf("\n");
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    decimalToOctal(decimalNumber);

    return 0;
}
