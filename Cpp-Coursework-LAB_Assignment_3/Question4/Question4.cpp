// Name: Evans Acheampong
// ID: 10987644
// Question 4
// LAB 3

#include <iostream>

using namespace std;

//The output of the given code

/* 20  23
   10  23
   11  11 */

   // Function for the output
int code_output(int& a, int b = 10) {
    if (a % b == 0)
        return ++a;
    else
        return b--;
}

int main() {
    int x = 20, y = 23;
    cout << "The output of the given code" << endl;
    y = code_output(x, y);
    cout << x << " " << y << endl;

    x = code_output(y);
    cout << x << " " << y << endl;

    y = code_output(x);
    cout << x << " " << y << endl;

    return 0;
}


