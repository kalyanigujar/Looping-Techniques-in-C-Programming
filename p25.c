// Read a no to check prime or not .
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // assume number is prime

    printf("Enter a number: ");  // Prompt user for input
    scanf("%d", &num);         // Read the number

    if (num <= 1) {           // 0 and 1 are not prime numbers
        isPrime = 0;  // 0 and 1 are not prime
    } else {               // check for factors from 2 to num/2
        for(i = 2; i <= num/2; i++) {  // check for factors
            if(num % i == 0) {  // found a factor
                isPrime = 0;  // found a factor
                break;   // no need to check further stop the value
            }
        }
    }

    if(isPrime == 1)   // if no factors found, it's prime
        printf("%d is a Prime Number\n", num);  // print result
    else   // if factors found, it's not prime
        printf("%d is Not a Prime Number\n", num);  // print result

    return 0;
}
