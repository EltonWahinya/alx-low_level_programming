#include <stdio.h>

int main () {
    char letter = 'a'; // Start with 'a'

    // Loop through the alphabet
    while (letter <= 'z') {
	putchar(letter); // Print the current letter
    	letter++;       // Move to the next letter
    }

    putchar('\n'); // Print a new line

    return 0;
}    
