#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {
    int STEPS = 12;
    char* KEY_NAMES[] = {"A", "A#", "B", "C", "C#", "D", "D#","E", "F", "F#", "G", "G#"};
    int NUMBER_OF_KEYS = 88;
    double INITIAL_FREQUENCY = 27.5;

    for (int i = 0; i < NUMBER_OF_KEYS; i++) {
        char* key_name = KEY_NAMES[i % STEPS];
        double frequency = INITIAL_FREQUENCY * (pow(2.0, (double) i / STEPS));
        printf("%s\t%.4f\n", key_name, frequency);
    }
    return 0;
}
