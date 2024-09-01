
//These are the external libraries we're going to be using
#include <stdio.h>



//This is the function signature for main()
//main() will return an int
//main() takes two arguments, an int called arc, and an array of strings called argv
//argc represeents the number of arguments, or strings, saved in argv
//The first string in argv is always the name of the program we're running
int main(int argc, char* argv[]) {

    //printf() is a library function that can print to the screen.
    printf("This is our first C program");

    //Assuming everything went well, we return 0
    return 0;
}