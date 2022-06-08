#include <iostream>
#include <complex>
#include "fun.h"
using namespace fun;
using namespace std;
int main()
{
    int a = 1, b = 2, tmp = 0;
    cout << "?1" << '\n';
    zad1_1(&a,&b);
    cout << a << b << '\n';
    a = 1;
    b = 2;
    zad1_2(a, b);
    cout << a << b << '\n';
    cout << "?2" << '\n';
    int c = 1;
    zad2_1(&c);
    cout << c << '\n';
    c = 1;
    zad2_2(c);
    cout << c << '\n';
    cout << "?3" << '\n';
    complex<double> v1(2.0, 1.0);
    zad3_1(&v1);
    cout << v1 << '\n';
    complex<double> v2(1.0, 2.0);
    zad3_2(v2);
    cout << v2 << '\n';
    cout << "?4" << '\n';
    float mat[3][3];
    float m;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    cin >> m;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << mat[i][j] << " ";
        }
        cout << '\n';
    }
    zad4_1(&mat[0][0], &m);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << '\n';
    }
    zad4_2(mat, m);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
