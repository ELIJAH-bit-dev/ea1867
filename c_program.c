#include<stdio.h>
/* print hellow world */
int main(){
    printf("Hello world!\n");
    printf("i am learning c programming\n ");
    printf("And is amazing !!\n");
    return 0;
    
}


#include <stdio.h>

int main(){
    int num1, num2, sum;

    // Input two integers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Output the sum
    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}	
	
#include <stdio.h>

// Function to demonstrate static variable
void counter() {
    static int count = 0;  // Static variable initialization

    // Increment the static variable
    count++;

    // Display the value of count
    printf("The counter is: %d\n", count);
}

int main() {
    // Call the counter function multiple times
    counter();
    counter();
    counter();

    return 0;
}

#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Output the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap without using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Output the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

//Reversed_Number
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input the number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop to reverse the digits of the number
    while (num != 0) {
        remainder = num % 10;          // Get the last digit
        reversed = reversed * 10 + remainder;  // Append the last digit to reversed number
        num = num / 10;                // Remove the last digit from original number
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}

#include <stdio.h>

// Simple functions to demonstrate memory locations in the code segment
void function1() {
    printf("This is function1.\n");
}

void function2() {
    printf("This is function2.\n");
}

int main() {
    // Display the memory address of main, function1, and function2
    printf("Address of main: %p\n", (void*)main);
    printf("Address of function1: %p\n", (void*)function1);
    printf("Address of function2: %p\n", (void*)function2);

    return 0;
}

#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is even or odd
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}











































