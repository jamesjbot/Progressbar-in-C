
/*
* A simple terminal progress bar to learn
* ANSI Escape Color Codes and UTF
*
* @author James Jongsurasithiwat
* @version 0.9
* @since 2020-12-13
*/


// C program to create loading bar
#include <stdio.h>
#include <time.h>

// Delay function
void delayForABit() {

	// Time structure parameter for nanosleep
	struct timespec tim, tim2;
	tim.tv_sec = 0;
	tim.tv_nsec = 125000000L;

	// Delay for time before printing next string
	nanosleep(&tim, NULL);

}


// Function to creating loading bar
void loadingBar()
{
    // Initialize char for printing
    // loading bar
		// "\u2591" light shade
		// "\u2592" medium shade
		// "\u2593" dark shade
		// "\u2588" FULL block
		// Index of UTF characters
		// https://gist.github.com/ivandrofly/0fe20773bd712b303f78

		// ANSI Escape color codes
		// https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797

		char initial[] = "\u2592";
		char cover[] = "\u2588";

    // Print background of loading bar
    for (int i = 0; i < 26; i++) {
        printf("\x1b[31m%s\x1b[0m", initial);
		}


		// Set the cursor to start of loading bar
		printf("\r");


    // Print loading bar progress
    for (int i = 0; i < 26; i++) {
        printf("\x1b[32m%s", cover);
				fflush(stdout); // Force buffer to draw string
				delayForABit();
    }

		printf("\n"); // flush buffer
}


// Driver Code
int main()
{
    // Function Call
    loadingBar();
    return 0;
}
