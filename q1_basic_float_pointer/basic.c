/*
 * Day 3 Exercise 1: Basic Pointer Operations with Float
 *
 * Implement the pointer operations as described in the tutorial Step 1.
 * Create a program that:
 * 1. Declares a float variable temp = 25.5f
 * 2. Creates a pointer to it
 * 3. Prints the original value and address
 * 4. Changes the value via the pointer to 30.0f
 * 5. Prints the new value
 *
 * Compile: gcc -Wall -std=c99 -o basic basic.c
 * Run: ./basic
 * Expected output matches the tutorial.
 */

#include <stdio.h>

int main() {
    // TODO: Implement the exercise here
    // Hint: Remember to use & for addresses and * for dereferencing. Declare a float, point to it, print value and address, modify via pointer, print again.
    float temp = 25.5; 
    float *ptr = &temp; 
    
    printf("Value: %.1ff\n", *ptr);
    printf("Address: %pf\n", ptr); 
    
    *ptr=30.0; 
    printf("New value: %.1ff\n", *ptr);

    return 0;
}

