#include <stdio.h>

// Placeholder for the custom gotoxy() function
void gotoxy(int x, int y) {
    // Implement the console positioning function here
    // This function should position the cursor at coordinates (x, y) in the console
    // The implementation depends on the platform/environment
}

int main() {
    int x, y, a, b, c = 0, j = 12, k = 2;

    printf("Binary Bits  Parity Bits \n");
    printf("======= =====\n");

    for (x = 0; x < 8; x++) {
        k++;
        j = 12;
        y = x;

        for (a = 0; a < 3; a++) {
            b = y % 2;
            gotoxy(j, k);
            printf("%d  ", b);
            j += 3; // Adjusting the column position for next digit
            y = y / 2;
            if (b == 1)
                c++;
        }

        if (c % 2 == 0) {
            gotoxy(25, k);
            printf("%d\n", 1);
        } else {
            gotoxy(25, k);
            printf("%d\n", 0);
        }
        c = 0;
    }
    
    return 0;
}
