#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100]; 
    int len;

    printf("Enter a string: ");
    scanf("%s", str); 

    len = strlen(str);

    char *s = &str[len - 1]; 
  
    while (s >= str && *s != ' ') {
        s--;
    }

    int last_word_length = len - (s - str + 1);

    printf("Length of Last Word is %d\n", last_word_length);

    return 0;
}
