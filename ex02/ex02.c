//This time we also need string.h
#include <stdio.h>
#include <string.h>



// This is the same as before
int main(int argc, char* argv[]) {

    // Here we declare a character array, which is how C stores strings
    // We initialize it with the secret password
    char secret_password[] = "gotta_start_somewhere";


    // Here we declare a character array, specifying a size of 50, but we don't initialize it
    // This will act as a buffer to store user input
    char user_input[50];


    printf("Enter the secret password: ");

    // scanf() is a library function that reads input and stores it at a particular memory address
    // "%s" tells scanf() to treat the input as a string
    // we then tell scanf() to store the input in the buffer we created earlier
    scanf("%s", user_input);


    // strcmp() compares two strings
    // if the strings are identical, it returns the int 0
    // otherwise, it will return a nonzero int
    int result = strcmp(secret_password, user_input);

    // This if statement checks if user_input and secret_password were the same
    // return 0 if successful, 1 if not
    if ( result == 0){
        printf("We're in!");
        return 0;
    } else {
        printf("Sorry, try again!");
        return 1;
    }

}