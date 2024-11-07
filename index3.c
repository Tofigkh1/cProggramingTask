#include <stdio.h>

int countWords(char *s) {
    int count = 0;
    int inWord = 0;

    while (*s) {
        if (*s != ' ') {   
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;  
        }
        s++;          
    }

    return count;
}

int main() {
    char s[] = "Holberton School is the best";
    printf("Number of words: %d\n", countWords(s));
    return 0;
}

