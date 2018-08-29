#include <iostream>

using namespace std;

int main()
{
    //primer ejercicio
    int a;
    int b;
    int c;
    int x;
    float y;
    int z;
    cin >> a;
    cin >> b;
    cin >> c;
    x = a+b+c;
    cout << "la suma es:" << x << endl;
    y = a+b+c/3.0;
    cout << "el promedio es:" << y << endl;
    z = a*b*c;
    cout << "el producto es:" << z << endl;









    //segundo ejercicio
    int d;
    cin >> d;
    if (d % 2){
        cout << "impar" << endl;
    }else{
        cout << "par" << endl;
    }
    //tercer ejercicio


    int e;
    cin >> e;
    int f = e % 10000;
    int g = e % 1000;
    int h = e % 100;
    int i = e % 10;
    int j = e % 1;









    return 0;
}
