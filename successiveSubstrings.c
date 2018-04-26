#include <stdio.h>
#include <string.h>

int newString(char const * string1, char const * string2){
    int string1Len = strlen(string1);
    int string2Len = strlen(string2);
    int count = 0;
    while (count < string1Len) {
        for (int i = 0; i <= count; i++) {
            printf("%c", string1[i]);
        }
        count ++;
    }
    count = string2Len - 1;
    while (count >= 0) {
        for (int i = 0; i <= count; i++) {
            printf("%c", string2[i]);
        }
        count --;
    }
    return 0;
}

int main(int argc, char const *argv[]) {
    if (argc != 3) {
        printf("This program requires exactly two command line argument\n");
        return 0;
    }
    newString(argv[1], argv[2]);
    return 1;
}
