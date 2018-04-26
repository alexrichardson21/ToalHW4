#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rotate(char const * string, int radix) {
    radix = radix % strlen(string);
    for (int i = 0; i < strlen(string); i++) {
        if (radix == strlen(string)) {
            radix = 0;
        }
        printf("%c", string[radix]);
        radix++;
    }
    return 0;
}

int main(int argc, char const *argv[]) {
    if (argc != 2) {
        return 0;
    }
    char const* string = argv[1];
    int radix = atoi(argv[2]);
    if (radix < 0) {
        printf("Pick an integer greater than or equal to 0\n");
        return 0;
    } else {
        rotate(string,  radix);
    }
    return 1;
}
