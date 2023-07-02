// Student ID: 10987644
// Name: Evans Acheampong

// Question 7

#include <iostream>

using namespace std;


int main()
{

    // a. The * operator is used to create pointers by declaring a pointer variable that will store the memory address of another variable.
    // The * is used in the declaration of the pointer variable to indicate that it is a pointer, but it is also used to reference the value of the variable being pointed to.
    //For example:

    int *ptr_1;
    int num_1 = 10;
    ptr_1 = &num_1; // stores the memory address of num in ptr

    // In this example, ptr is declared as a pointer to an integer using the * operator.
    // The address of num is then assigned to ptr using the address-of operator (&), so ptr now points to num.
    //The value of num can be accessed through ptr using the dereference operator *, like this:


    cout << *ptr_1 << endl; // outputs 10

    // b. The * operator is used to dereference pointers, which means accessing the value stored in the memory address that the pointer points to.
    // When we use the * operator with a pointer, it allows us to access or modify the value stored at that memory address.

    // For example:

    int num_2 = 10;
    int *ptr_2 = &num_2; // ptr now points to num
    *ptr_2 = 20; // modify the value of num through ptr
    cout << num_2 << endl; // outputs 20

    // In this example, ptr is declared as a pointer to an integer and is initialized to point to num.
    // The dereference operator * is used to assign the value 20 to the memory location pointed to by ptr, which is num.
    // Finally, the value of num is outputted to the console, and we see that it has been modified to 20.

}


