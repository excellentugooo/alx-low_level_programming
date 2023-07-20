#include <stdio.h>

int is_palindrome(int number) {
    int reversed = 0, original = number;

    while (number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    return reversed == original;
}

int find_largest_palindrome() {
    int largest_palindrome = 0;

    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int product = i * j;
            if (is_palindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }

    return largest_palindrome;
}

int main() {
    int result = find_largest_palindrome();

    // Save the result in the file
    FILE *file = fopen("102-result", "w");
    if (file) {
        fprintf(file, "%d", result);
        fclose(file);
    }

    return 0;
}

