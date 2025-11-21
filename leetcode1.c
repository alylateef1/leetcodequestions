#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; i < strlen(vowels); i++) {
        if (ch == vowels[i]) {
            return 1; 
        }
    }
    return 0; 
}

void reverseVowels(char* s) {
    int len = strlen(s);
    int left = 0, right = len - 1;

    while (left < right) {
        while (left < right && !isVowel(s[left])) {
            left++;
        }

        while (left < right && !isVowel(s[right])) {
            right--;
        }

        if (left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
    char s[] = "IceCreAm";
    reverseVowels(s);
    printf("%s\n", s); 
    return 0;
}
