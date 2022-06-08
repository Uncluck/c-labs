#include "menu.h"
using namespace std;
Menu::Menu() {
    cout << "Please, enter type of the operation:\n";
    cout << "1 - Summary of two vectors\n";
    cout << "2 - Subtraction between vectors\n";
    cout << "3 - Find length of the vector\n";
    cout << "4 - Angle between two vectors \n";
    cout << "\n";
}

void Menu::selectMenuItem(Menu settings) {
    VectorR3 r1, r2;
    double x, y, z;
    char command;
    
while(cin >> command){
    switch (command) {
        case '1':
            cout << "Enter first vector";
            cin >> x >> y >> z;
            r1.setXYZ(x, y, z);

            cout << "Enter second vector";
            cin >> x >> y >> z;
            r2.setXYZ(x, y, z);

            cout << "Result of summary:\n";
            VectorR3::printVector(VectorR3::sumVectors(r1, r2));
            break;

        case '2':
            cout << "Enter first vector";
            cin >> x >> y >> z;
            r1.setXYZ(x, y, z);

            cout << "Enter second vector";
            cin >> x >> y >> z;
            r2.setXYZ(x, y, z);

            cout << "Result of subtraction:\n";
            VectorR3::printVector(VectorR3::subVectors(r1, r2));
            break;

        case '3':
            cout << "Enter the vector";
            cin >> x >> y >> z;
            r1.setXYZ(x, y, z);

            std::cout << "Length = " << VectorR3::lenVector(r1) << '\n';
            break;

        case '4':
            cout << "Enter first vector";
            cin >> x >> y >> z;
            r1.setXYZ(x, y, z);

            cout << "Enter second vector";
            cin >> x >> y >> z;
            r2.setXYZ(x, y, z);

            cout << "Angel = " << VectorR3::find_angle(r1, r2) << '\n';
            break;

        default:
            cout << "Wrong command! \n";
            break;
            
    }
}

}
