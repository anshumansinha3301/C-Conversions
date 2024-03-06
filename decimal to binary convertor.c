#include <stdio.h>
void decimalToBinary(int decimalNumber) {
    int binaryNumber[32];  // Assuming a 32-bit binary representation
    int i = 0;

    while (decimalNumber > 0) {
        binaryNumber[i] = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
        i++;
    }

    printf("Binary equivalent: ");
    
    // Printing the binary representation in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNumber[j]);
    }

    printf("\n");
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    decimalToBinary(decimalNumber);

    return 0;
}
