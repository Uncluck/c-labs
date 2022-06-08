#include <iostream>
#include "fun.h"
using namespace std;
using namespace fun;

int main() {
    Menu m;
    int f = 1;

    while (f != 2) {
        m.setFunc();
        m.Func();

        cout << "Continue?"<<endl;
        cout << "1 - Yes"<<endl;
        cout << "2 - No"<<endl;

        cin >> f;
    }
    return 0;
}