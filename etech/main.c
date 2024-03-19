/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

// Function to reverse a given number
int reverseNumber(int num,int *reversedNum) {
     *reversedNum = 0;

    while (num != 0) {
        int remainder = num % 10;
        *reversedNum = *reversedNum * 10 + remainder;
        num /= 10;
    }

}

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    int reversedNum;
    reverseNumber(num ,&reversedNum);

    // Output the reversed number
    printf("Reversed number: %d\n", reversedNum);
    if (num==reversedNum)
    {
        printf("output is palindrome");
    }
    else
    {
        printf("output is palindrome");
    }

    return 0;
}
