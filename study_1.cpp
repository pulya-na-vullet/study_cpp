#include <iostream>
using namespace std;
int main()
{
    int var1, var2;
    cout << "1:" << var1 << endl;
    cout << "\n2:" << &var1 << endl;
    var1 = 5;
    cout << "\n3:" << var1;
    var1 = var1 + 5;
    cout << "\n4:" << var1 << endl;
    cout << "\n5:" << var1;
    cout << "\n5:" << var1;
    return 0;
}