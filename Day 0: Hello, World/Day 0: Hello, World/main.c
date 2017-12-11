#include <stdio.h>
#define LIMITS_OF_INPUT 105

int main() {
    // Declare a variable named 'input_string' to hold our input.
    char input_string[LIMITS_OF_INPUT];
    
    // Read a full line of input from stdin and save it to our variable, input_string.
    fgets(input_string, LIMITS_OF_INPUT, stdin);
    
    // Print a string literal saying "Hello, World." to stdout using printf.
    printf("Hello, World.\n%s",input_string);
    
    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    
    return 0;
}
