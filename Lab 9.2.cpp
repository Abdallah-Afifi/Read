#include <iostream>

using namespace std;

void read(int &, int &);
int main()
{
    int num1, num2;
    read(num1, num2);
    cout << "The two numbers are: " << num1 << " and " << num2;

    return 0;
}

void read(int& v1, int& v2)
{
    cout << "Enter two integars: ";
    cin >> v1 >> v2;
}
