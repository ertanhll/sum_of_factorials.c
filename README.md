Write a C program that calculates the sum of factorials of even numbers from 2! to 2*n! for a given positive integer n. Display each factorial value and the cumulative sum as the program iterates through the loop. Finally, print out the total sum of factorials.

Your program should perform the following steps:

Declare and initialize variables sum_fac and sum_sigma to 1 and 0, respectively.
Prompt the user to enter a positive integer value for n.
Use a loop to iterate through even numbers from 2 to 2*n.
Inside the loop, calculate the factorial of each even number and update sum_sigma with the cumulative sum of factorials.
Display the current iteration index i, the factorial value sum_fac, and the cumulative sum sum_sigma for each iteration.
After the loop, print the total sum of factorials from 2! to 2*n!.
Compile and run the program, providing sample inputs to verify its correctness.
Ensure to provide comments in your code to explain the logic and each step.

output:
```
i= 2 sum_fac= 2  sum_sigma= 2
i= 4 sum_fac= 24  sum_sigma= 26
i= 6 sum_fac= 720  sum_sigma= 746
i= 8 sum_fac= 40320  sum_sigma= 41066
i= 10 sum_fac= 3628800  sum_sigma= 3669866

2!+4!+6!.. 2! den 2*5!  toplami = 3669866 

```
