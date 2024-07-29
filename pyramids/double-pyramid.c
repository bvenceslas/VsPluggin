#include <stdio.h>

int main() {
    int height;

    // Prompt for a positive height until a valid input is received
    do {
        printf("Height: ");
        scanf("%d", &height);
    } while (height < 1 || height > 8);

    // Loop to print the pyramid rows
    for (int i = 1; i <= height; i++) {
        // Print spaces for alignment
        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }

        // Print the left-aligned triangle
        for (int j = 0; j < i; j++) {
            printf("#");
        }

        // Print the gap between the triangles
        printf("  ");

        // Print the right-aligned triangle
        for (int j = 0; j < i; j++) {
            printf("#");
        }

        // Print newline, but avoid it after the last row
        if (i < height) {
            printf("\n");
        }
    }

    return 0;
}
