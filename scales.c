#include <stdio.h>
#include <string.h>

int print_scale(char const* note, char const* scale) {
    char* KEY_NAMES[] = {"A", "A#", "B", "C", "C#", "D", "D#","E", "F", "F#", "G", "G#"};
    int NUMBER_OF_NOTES = 12;//sizeof(KEY_NAMES) / sizeof(int);
    //int STEPS = 6;
    int MAJOR_STEPS[] = {2,2,1,2,2,2};
    int MINOR_STEPS[] = {2,1,2,2,1,2};
    int NUMBER_OF_STEPS = sizeof(MAJOR_STEPS) / sizeof(int);

    int offset = -1;
    for (int i = 0; i < NUMBER_OF_NOTES; i++) {
        if (strcmp(KEY_NAMES[i], note) == 0){
            offset = i;
        }
    }
    if (offset == -1) {
        printf("No such key: %s", note);
        return 0;
    }

    printf("%s %s: ", note, scale);

    for (int step = 0; step <= NUMBER_OF_STEPS; step++) {
        printf("%s ", KEY_NAMES[offset]);

        if (strcmp(scale, "major") == 0) {
            offset += MAJOR_STEPS[step];
        } else {
            offset += MINOR_STEPS[step];
        }
        if (offset >= NUMBER_OF_NOTES) {
            offset -= NUMBER_OF_NOTES;
        }


    }
    printf("\n");
    return 1;
}

int main(int argc, char const *argv[]) {
    if (argc != 2){
        printf("This program requires exactly one command line argument\n");
        return 0;
    }
    if (print_scale(argv[1], "major") != 0){
        print_scale(argv[1], "minor");
    }
    return 1;
}
