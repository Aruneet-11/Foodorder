#include <iostream>
using namespace std;
int main()
{
    int x = 9;
    int *p = &x; // pointer points to the address of the variable.
    int &y = x;  // reference varibale that stores the refrence of x.
    cout << p << endl;
    cout << y;
}