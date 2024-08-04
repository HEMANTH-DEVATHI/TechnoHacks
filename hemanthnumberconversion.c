#include <stdio.h>
void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}
void decimalToOctal(int decimal) {
    int octal[32];
    int i = 0;
    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}
void decimalToHexadecimal(int decimal) {
    char hexadecimal[32];
    int i = 0;
    while (decimal > 0) {
        int temp = decimal % 16;
        if (temp < 10) {
            hexadecimal[i] = temp + 48; 
        } else {
            hexadecimal[i] = temp + 55; 
        }
        decimal = decimal / 16;
        i++;
    }
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

int main() {
    int decimal;
    int choice;

    printf("Enter a decimal number:\n");
    scanf("%d", &decimal);

    printf("Choose the conversion:\n");
    printf("1. Binary\n");
    printf("2. Octal\n");
    printf("3. Hexadecimal\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            decimalToBinary(decimal);
            break;
        case 2:
            decimalToOctal(decimal);
            break;
        case 3:
            decimalToHexadecimal(decimal);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}