#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, j, length = 0, vowelCount = 0, isPalindrome = 1;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);   // reads a single word (no spaces)

    // Find length manually
    while (str[length] != '\0') {
        length++;
    }

    // Reverse string (without library functions)
    for (i = 0, j = length - 1; i < length; i++, j--) {
        rev[i] = str[j];
    }
    rev[length] = '\0';  // null-terminate reversed string

    // Count vowels
    for (i = 0; i < length; i++) {
        char ch = str[i];
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            vowelCount++;
        }
    }

    // Check palindrome
    for (i = 0; i < length; i++) {
        if (str[i] != rev[i]) {
            isPalindrome = 0;
            break;
        }
    }

    // Output results
    printf("\n--- String Analysis ---\n");
    printf("Original String : %s\n", str);
    printf("Reversed String : %s\n", rev);
    printf("Vowel Count     : %d\n", vowelCount);
    if (isPalindrome) {
        printf("Palindrome      : Yes\n");
    } else {
        printf("Palindrome      : No\n");
    }

    return 0;
}
