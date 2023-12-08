
#include <stdio.h>

int main() {
    int amount;
    int notes[6] = {2000, 500, 100, 50, 20, 10}; // Denominations of notes

    // Input the amount
    printf("Enter the amount: ");
    scanf("%d", &amount);

    // Initialize a counter for each type of note
    int note_count[6] = {0};

    // Iterate through the notes and count how many of each are needed
    for (int i = 0; i < 6; i++) {
        note_count[i] = amount / notes[i];
        amount = amount % notes[i];
    }

    // Display the results
    for (int i = 0; i < 6; i++) {
        if (note_count[i] > 0) {
            printf("%d notes of %d\n", note_count[i], notes[i]);
        }
    }

    return 0;
}

