#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int first_input;
    double second_input;
    char third_input[100];
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &first_input);
    scanf("%lf", &second_input);
    fgetc(stdin);
    fgets(third_input, 100, stdin);
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + first_input);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n", d + second_input);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s", s);
    printf("%s", third_input);
    
    
}
