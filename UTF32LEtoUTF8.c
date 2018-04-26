#include <stdio.h>
#include <string.h>
#include <math.h>

int littleEndianToBigEndian(char* littleEndian){
    //int DIGITS = sizeof(littleEndian) / sizeof(int);
    printf("%lu\n", strlen(littleEndian));
    int len = strlen(littleEndian);
    char bigEndian[len];

    for (int i = 0; i < len; i += 2) {
        bigEndian[i] = littleEndian[i + 1];
    }
    for (int i = 1; i < len; i += 2) {
        bigEndian[i] = littleEndian [i - 1];
    }
    //printf("%lu\n", sizeof(bigEndian) / sizeof(int));
    for (int i = 0; i < len; i++) {
        printf("%c", bigEndian[i]);
    }
    UTF32toUTF8(bigEndian);
    //printf("%d\n", bigEndian);
    return 0;
}

int UTF32toUTF8(char* UTF32){
    int firstCharIndex;
    char* range = {'8', '9', 'A', 'B', 'C', 'D', 'E', 'F'}
    for (int firstCharIndex = 0; i < strlen(UTF32); i++) {
        if (UTF32[i] != 0) {
            break;
        }
    }
    if (firstCharIndex >= strlen(UTF32) - 3){
        charRange1(UTF32);
    } else if (firstCharIndex >= strlen(UTF32) - 4) {
        for (i = 0; i < strlen(range); i++) {
            if (UTF32[firstCharIndex] == range[i]) {
                charRange3();
            }
        }
        charRange2(UTF32);
    } else if (firstCharIndex >= strlen(UTF32 - 5) && UTF32[firstCharIndex] == '1') {
        charRange4(UTF32);
    }
    return 0;
}

int charRange1(char* UTF32){
    char* hex[4];
    hex[0] = '0';
    hex[1] = 'x';
    for (int i = strlen(UTF32) - 3; i < strlen(UTF32); i++) {
        hex[i + 2] = UTF32[i];
    }
}
int charRange2(char* UTF32){

}
int charRange3(char* UTF32){

}
int charRange4(char* UTF32){

}

int main(int argc, char const *argv[]) {
    char* arg = "0000000B";
    /*
    printf("%d", littleEndian[0]);
    printf("%d", littleEndian[1]);
    printf("%d", littleEndian[2]);
    printf("%d", littleEndian[3]);
    printf("%d", littleEndian[4]);
    printf("%d", littleEndian[5]);
    printf("%d", littleEndian[6]);
    printf("%d\n", littleEndian[7]);
    */
    //littleEndianToBigEndian(arg);
    //UTF32toUTF8(arg);
    charRange1(arg);
    return 0;
}
