// Write a program to read and display a 2D array of strings in C language.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>


// Functions Declarations (Prototype)

// Main Function Start
int main()
{
    const int ROWS;
    printf("\nHow Many Names You Want to Enter (MAX %d) => ", MAX_ROWS);
    scanf("%d", &ROWS);

    // Invalid Input ROWS Entered by User
    if (ROWS < 1 || ROWS > MAX_ROWS)
    {
        puts("\n!!! Invalid Input...");
        exit(0);
    }

    // Declare 2D Array According to user's input
    char names[ROWS][MAX_COLS];

    // Read Names
    printf("\n>>>>>>>>>>>>> Enter %d Names <<<<<<<<<<<\n", ROWS);
    for (int i = 0; i < ROWS; i++)
    {
        printf("\nEnter Name-%d (MAX CHARACTERS %d) => ", i + 1, MAX_COLS - 1);
        fflush(stdin);
        fgets(names[i], MAX_COLS, stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; // Replace '\n' character with '\0'
    }

    // Display Names
    printf("\n>>>>>>>>>>>>> List of Names <<<<<<<<<<<\n");
    for (int i = 0; i < ROWS; i++)
        puts(names[i]);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definitions

