# Cpp-Coursework-LAB_Assignment_3
This repository contains lab assignment 3 for my college coursework in C++. 

![Untitled](https://user-images.githubusercontent.com/102630199/226629056-f37207b4-1b47-48d3-8413-a17254a91ccb.png)
  
             UNIVERSITY OF GHANA
            (All rights reserved)
        DEPARTMENT OF COMPUTER ENGINEERING
            SCHOOL OF ENGINEERING SCIENCES
        FIRST SEMESTER 2022/2023 ACADEMIC YEAR
C++ PROGRAMMINIG
LAB 3

1. Write a C++ user-defined function that takes arrays A, B, and C as arguments,
where arrays A and B are of size M and N respectively, and array C is of size M +
N. The numbers in array A are in ascending order, while the numbers in array B
are in descending order. The function should merge arrays A and B into a single
array C in ascending order.

2. Create a function named MIX () that takes four arguments: two arrays of
integers, A and B, of sizes M and N respectively, and two empty arrays, C
and D. The function should arrange the elements in arrays A and B in the
following manner: first all even numbers of A from left to right are copied
into C from left to right, then all odd numbers of A from left to right are
copied into C from right to left, followed by all even numbers of B from left
to right being copied into C from left to right, and finally all odd numbers of
B from left to right being copied into C from right to left. e.g., A is {3, 2, 1,
7, 6, 3} and B is {9, 3, 5, 6, 2, 8, 10} the resultant array C is {2, 6, 6, 2, 8,
10, 5, 3, 9, 3, 7, 1, 3}.

3. Write a C++ function that takes input from the user and stores it in a 1-D
array of size 10. Using loops and lessons covered in class, write a program
to reverse the elements of the integer 1-D array. eg. If the 1-D array is
{3,2,5,8,4} the resulting array should be {4,8,5,2,3}2

4. Write the output of the following program:

#include <iostream>
  
using namespace std;
  
int func(int &x, int y = 10)
{
  
  if (x % y == 0)
  
  return ++x;
  
  else
  
  return y--;
  
}
  
  int main()
  
{
  
  int p = 20, q = 23;
  
  q = func(p, q);
  
  cout << p << " " << " " << q << endl;
  
  p = func (q);
  
  cout << p << " " << " " << q << endl;
  
  q = func (p);
  
  cout << p << " " << " " << q << endl;
  
  return 0;
  
}
