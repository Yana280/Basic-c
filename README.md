# Basic-c
## 1.Printing Hello World and using int char and float data types(Lab1.c)
printf statement prints the string "hello world!" as an output
 \n at the end is used to print on a new line. 
 The %d format specifier is used with the printf function, it tells printf to expect an integer argument, and to replace the %d with the integer.
 Similiarly, %c format specifier is used to add a character and %f format specifier is used to add a floating point number(float).
 The main function returns the value 0, which is a convention to indicate that the program executed successfully.![Screenshot (216)](https://user-images.githubusercontent.com/125993593/230716229-263a61e9-45d2-49db-a3ce-1d26ee07d1f3.png)
### Algorithm
1.  Start
2.  Declare and initialize integer variable x to 1, character variable y to 'c', and floating-point variable z to 5.5.
3.  Print the string "hello world!" followed by a newline character to the standard output using the printf function.
4.  Print the value of variable x followed by a newline character to the standard output using the printf function.
5.  Print the value of variable y followed by a newline character to the standard output using the printf function.
6.  Print the value of variable z followed by a newline character to the standard output using the printf function.

  ## 2.Determining whether a given number is odd or even
 We have used a modulus operator (%) to determine whether the number is even or odd.
 If the number is divisible by 2 (if (num % 2 == 0)) (i.e., the remainder when divided by 2 is 0), then it is even. Otherwise, it is odd.
 We print the result to the console using printf() 
 7.![Screenshot (217)](https://user-images.githubusercontent.com/125993593/230735924-c7e7aa5d-de0c-4904-995e-8d7ca1665ffc.png)
  ### Algorithm
 1. Start
2. Input the number to be checked.
3. Calculate the remainder when the number is divided by 2 using the modulus operator (%).
4. If the remainder is 0, then the number is even. Go to step 6.
5. If the remainder is not 0, then the number is odd. Go to step 7.
6. Output "The number is even" and go to step 8.
7. Output "The number is odd" and go to step 8.
8. Stop.

## 3.Taking an input fron the user
int num declares an integer variable num, which will be used to store the user's input.
 scanf() function to read an integer input from the user and store it in the num variable.
 Include the standard input/output library.
 ![Screenshot (218)](https://user-images.githubusercontent.com/125993593/230738164-755cf4e1-9c0d-42e5-96d9-3bbed7790d0d.png)
 ### Algorithm
1.  Start
2.   Define the main() function.
3.  Declare an integer variable num.
4.  Print a message to the console asking the user to enter an integer.
5.  Use the scanf() function to read an integer input from the user and store it in the num variable.
6.  Use the printf() function to print a message to the console indicating the integer entered by the user.
7.  End the main() function and return an exit status of 0.
8.  Stop.
## 4.Operation on integers
This program performs the arithmetic operations of addition, subtraction, multiplication, integer division, and modulo, and assigns the results to the variables sum, diff, prod, quot, and rem, respectively. Then it uses the printf() function to print out the results of each operation.
![Screenshot (219)](https://user-images.githubusercontent.com/125993593/230738756-6b1c60ed-8390-49f9-a318-4a8d56c310ae.png)
### Algorithm
1. Start the program.
2. Declare the variables a, b, sum, diff, prod, quot, and rem as integers.
3. Prompt the user to enter the first integer.
4. Read the first integer entered by the user and store it in the variable a.
5. Prompt the user to enter the second integer.
6. Read the second integer entered by the user and store it in the variable b.
7. Calculate the sum of the two integers and store the result in the variable sum.
8. Calculate the difference between the two integers and store the result in the variable diff.
9. Calculate the product of the two integers and store the result in the variable prod.
10. Calculate the integer division of the first integer by the second integer and store the result in the variable quot.
11. Calculate the modulo operation of the first integer by the second integer and store the result in the variable rem.
12. Display the result of the sum using printf() function.
13. Display the result of the difference using printf() function.
14. Display the result of the product using printf() function.
15. Display the result of the integer division using printf() function.
16. Display the result of the modulo operation using printf() function.
17. End the program.
## 5.Swapping two numbers
This is a C program that reads in two decimal numbers from the user using scanf, swaps their values using a temporary variable, and then prints out the swapped values using printf.
To swap the values of first and second, the program uses a temporary variable temp. 
The value of first is assigned to temp using the assignment operator "=", which temporarily stores the value of first.
The program then uses printf to print out the swapped values of first and second using the "%.2lf" format specifier, which displays the values with two decimal points.
![Screenshot (289)](https://user-images.githubusercontent.com/125993593/234146193-d4ffc8bd-9a94-4707-9abe-6e3af4d0a6cc.png)

### Algorithm
1)  Start the program.
2)  Declare three double variables named "first", "second", and "temp".
3)  Print the message "Enter first number: " to the console.
4)  Read a double value from the console and assign it to the variable "first" using scanf.
5)  Print the message "Enter second number: " to the console.
6)  Read a double value from the console and assign it to the variable "second" using scanf.
7)  Assign the value of "first" to "temp".
8)  Assign the value of "second" to "first".
9)  Assign the value of "temp" (which now contains the initial value of "first") to "second".
10) Print the message "After swapping, first number = " to the console.
11) Print the value of "first" to the console with 2 decimal points using printf.
12) Print the message "After swapping, second number = " to the console.
13) Print the value of "second" to the console with 2 decimal points using printf.
14) End the program.



 
