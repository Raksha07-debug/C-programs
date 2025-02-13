#include <stdio.h>
#include <string.h>
int lengthOfLastWord(char* s) {
    int length = 0, i = strlen(s) - 1;

    // Ignore trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Count the length of the last word
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}

int main() {
    char s[] = "luffy is still joyboy";
    printf("%d\n", lengthOfLastWord(s)); // Output: 6
    return 0;
}
