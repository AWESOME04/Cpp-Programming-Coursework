# Cpp-Coursework-LAB_Assignment_5
This repository contains  lab assignment 1 for my college coursework in C++.

![Untitled](https://user-images.githubusercontent.com/102630199/226629056-f37207b4-1b47-48d3-8413-a17254a91ccb.png)
  
             UNIVERSITY OF GHANA
            (All rights reserved)
        DEPARTMENT OF COMPUTER ENGINEERING
            SCHOOL OF ENGINEERING SCIENCES
        FIRST SEMESTER 2022/2023 ACADEMIC YEAR
C++ PROGRAMMINIG
LAB 5

1. Write a Write a program whose main function is merely a collection of
variable declarations and function calls. This program reads a text and
outputs the letters, together with their counts, as explained below in the
function printResult. (There can be no global variables! All information
must be passed in and out of the functions. Use a structure to store the
information.) Your program must consist of at least the following
functions:

• Function openFile: Opens the input and output files. You must pass the file
streams as parameters (by reference, of course). If the file does not exist, the
program should print an appropriate message and exit. The program must
ask the user for the names of the input and output files.

• Function count: Counts every occurrence of capital letters A-Z and small
letters a-z in the text file opened in the function openFile. This information
must go into an array of structures. The array must be passed as a parameter,
and the file identifier must also be passed as a parameter.

• Function printResult: Prints the number of capital letters and small letters,
as well as the percentage of capital letters for every letter A-Z and the
percentage of small letters for every letter a-z. The percentages should look
like this: ‘‘25%’’. This information must come from an array of structures,
and this array must be passed as a parameter.2

2. Given the following declaration:
int num;
int *ptr1;
int *ptr2;
double *ptr3;
Mark the following statements as valid or invalid. If a statement is
invalid, explain why.

a. ptr1 = ptr2;
b. num = ptr1;
c. ptr3 = ptr1;
d. *prt3 = *ptr2;
e. *ptr1 = *ptr2;
f. num = *ptr2;
g. ptr1 = &ptr2;
h. ptr1 = &num;
i. num = &ptr1;

3. What is the output of the following C++ code?
int *length;
int *width;
length = new int;
*length = 5;
width = length;
length = new int;
*length = 2 * (*width);
cout << *length << " " << *width << " " << (*length) * (*width) << endl;

4. Explain in your own words what the line, length = new int; does in the
code above.

5. What is dynamic memory allocation and how is it important to you as a
c++ programmer.

6. What is the output of the following C++ code? (Assume that decimal
numbers are output with two decimal places.)3

double *test1 = new double;
double *test2 = new double;
double *average;
average = test1;
*test1 = 45.00;
*test2 = 90.00;
test1 = test2;
test2 = new double;
*test2 = 86.00;
*average = ((*test1) + (*test2)) / 2;
cout << *test1 << " " << *test2 << " " << *average << endl;

7. a. How is * used to create pointers? Give an example to justify your
answer.
b. How is * used to dereference pointers? Give an example to justify your
answer.

8. Consider the following statement:
int* p, q;
This statement could lead to what type of misinterpretation?

9. Suppose that you have the declaration:
int *numPtr;

What is the difference between the expressions: *numPtr and &numPtr?

10.Given the declaration:
int *p;
the statement:
p = new int[50];
dynamically allocates an array of 50 components of type int, and p
contains the base address of the array.
Is the above statement true or false? Explain.
