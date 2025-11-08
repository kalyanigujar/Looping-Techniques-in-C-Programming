// Read a Four Digit no to print it using Alphabet  

//  i.p 1234 o.p One Two Three Four 
#include <stdio.h>

int main() {
    int num, d1, d2, d3, d4;  // Declare variables for the number and its digits
    printf("Enter a four digit number: ");  // Prompt user for input
    scanf("%d", &num); // Read the four-digit number

    d1 = num / 1000;          // first digit
    d2 = (num / 100) % 10;    // second digit
    d3 = (num / 10) % 10;     // third digit
    d4 = num % 10;            // fourth digit

    if(d1==1) printf("One ");  // Print the first digit in words
    if(d1==2) printf("Two ");  // Print the first digit in words
    if(d1==3) printf("Three ");
    if(d1==4) printf("Four ");
    if(d1==5) printf("Five ");
    if(d1==6) printf("Six ");
    if(d1==7) printf("Seven ");
    if(d1==8) printf("Eight ");
    if(d1==9) printf("Nine ");

    if(d2==0) printf("Zero ");   // Print the second digit in words
    if(d2==1) printf("One ");
    if(d2==2) printf("Two ");
    if(d2==3) printf("Three ");
    if(d2==4) printf("Four ");
    if(d2==5) printf("Five ");
    if(d2==6) printf("Six ");
    if(d2==7) printf("Seven ");
    if(d2==8) printf("Eight ");
    if(d2==9) printf("Nine ");

    if(d3==0) printf("Zero ");   // Print the third digit in words
    if(d3==1) printf("One ");
    if(d3==2) printf("Two ");
    if(d3==3) printf("Three ");
    if(d3==4) printf("Four ");
    if(d3==5) printf("Five ");
    if(d3==6) printf("Six ");
    if(d3==7) printf("Seven ");
    if(d3==8) printf("Eight ");
    if(d3==9) printf("Nine ");

    if(d4==0) printf("Zero ");  // Print the fourth digit in words
    if(d4==1) printf("One ");
    if(d4==2) printf("Two ");
    if(d4==3) printf("Three ");
    if(d4==4) printf("Four ");
    if(d4==5) printf("Five ");
    if(d4==6) printf("Six ");
    if(d4==7) printf("Seven ");
    if(d4==8) printf("Eight ");
    if(d4==9) printf("Nine ");

    return 0;
}
