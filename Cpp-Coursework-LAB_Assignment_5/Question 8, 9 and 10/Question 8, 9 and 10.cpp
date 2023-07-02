// Student ID: 10987644
// Name: Evans Acheampong

// Question 8

#include <iostream>

using namespace std;


int main()
{

// The statement int* p, q; declares a pointer p to an integer and a regular integer q. However, it could lead to a misinterpretation that both p and q are pointers to integers.
// This is because the asterisk * is only applied to the variable name p and not to q.


// Therefore, someone reading the code might mistakenly think that q is also a pointer to an integer, which could lead to errors in their understanding of the program.
// It's important to note that declaring variables in separate statements, such as int* p; int q;, can avoid this potential misinterpretation.


// Question 9

// In C++, the expression *numPtr is a dereference operation on the pointer numPtr, which means it accesses the value that numPtr points to. In other words, it returns the value stored in the memory location that numPtr is pointing to.

// The expression &numPtr, on the other hand, is the address-of operator, which returns the memory address of the pointer variable numPtr. It gives the location in memory where the pointer itself is stored, not the value it points to.

// To illustrate this with an example, consider the following code snippet:


    int x = 42;
    int* numPtr = &x;

    cout << *numPtr << endl;  // Output: 42
    cout << &numPtr << endl;  // Output: address of numPtr

}

// In this example, numPtr points to the variable x using the address-of operator &. The dereference operator * is used to access the value of x through the pointer numPtr.
// The second cout statement prints the memory address of numPtr, which is different from the memory address of x stored in numPtr.


// Question 10

// The statement is true.

// In C++, the declaration int *p; creates a pointer variable p that can point to an integer value.

// The statement p = new int[50]; dynamically allocates an array of 50 integers on the heap and assigns the base address of the array to the pointer variable p.
// The new operator returns a pointer to the first element of the array, which is assigned to p.

// Therefore, after this statement is executed, p points to the first element of the dynamically allocated array of 50 integers.
// Each element in the array can be accessed using pointer arithmetic, for example p[0], p[1], p[2], ..., p[49].

// It is important to note that the memory allocated by new must be released using delete [] p; to prevent memory leaks.



