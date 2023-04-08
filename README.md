# Basic-c
## 1.Printing Hello World and using int char and float data types
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
Stop
 
 ### Algorithm
 1. Start
2. Input the number to be checked.
3. Calculate the remainder when the number is divided by 2 using the modulus operator (%).
4. If the remainder is 0, then the number is even. Go to step 6.
5. If the remainder is not 0, then the number is odd. Go to step 7.
6. Output "The number is even" and go to step 8.
7. Output "The number is odd" and go to step 8.
8. Stop.
 

 
