#include <iostream>
using namespace std;

void print(int n)
{
    cout << n << endl;
}

void print(string s)
{
    cout << s << endl;
}

int main()
{
    // where paramater is string will print string on the screen
    string s = "hello world";
    print(s);

    // where parameter is integer will print integer on the screen
    int n = 100;
    print(n);

    return 0;
}