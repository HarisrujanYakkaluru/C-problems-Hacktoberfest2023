#include <stdio.h>

// Function to convert an integer to Roman numeral
void intToRoman(int num) {
    // Arrays to store the Roman numerals and their corresponding values
    char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    // Check if the number is within the valid range (1-3999999)
    if (num < 1 || num > 3999999) {
        printf("Number out of range. Valid range: 1-3999999.\n");
        return;
    }

    // Iterate through the values array and build the Roman numeral
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            printf("%s", roman[i]);
            num -= values[i];
        }
    }

    printf("\n");
}

int main() {
    int number;
    printf("Enter a number (up to 9 digits): ");
    scanf("%d", &number);

    intToRoman(number);

    return 0;
}
