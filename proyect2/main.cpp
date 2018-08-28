#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    if(a>b)
    {
        cout << "el mayor es:" << a << endl;
        cout << "el menor es:" << b << endl;
    }
    else if (a==b)
        cout << "son iguales"<< endl;

    else
    {
        cout << "el mayor es:" << b << endl;
        cout << "el menor es:" << a << endl;
    }
    return 0;
}
