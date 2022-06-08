//
// Created by dmmel on 08.04.2022.
//

#include "fun.h"
#include <cmath>
#include <iostream>
#include <algorithm>
namespace fun {
    Leght::Leght() {
        x = 0, y = 0, mass_ = 0;
    }


    void Leght::initFromDialog() {
        cout << "Enter Leght's coords :\n";
        cin >> x >> y;
        cout << "Enter Leght's mass :\n";
        cin >> mass_;
    };

    double Leght::square() {
        return x + y;
    };

    double Leght::perimeter() {
        return x + y;
    };

    double Leght::mass() const {
        return mass_;
    };

    CVector2D Leght::position() {
        CVector2D answer{};
        answer.x = x;
        answer.y = y;
        return answer;
    };

    bool Leght::operator==(const IPhysObject &obj) const {
        return (mass_ == obj.mass());
    };

    bool Leght::operator<(const IPhysObject &obj) const {
        return (mass_ < obj.mass());
    };

    void Leght::draw() {
        cout << "Coords of Leght:" << x << y << "\n";
        cout << "Mass: " << mass_ << "\n";
    }

    const char *Leght::classname() {
        return typeid(this).name();
    };

    unsigned int Leght::size() {
        return sizeof *this;
    };


    Trapezium::Trapezium() {
        x = 0, y = 0, x1 = 0, y1 = 0, h = 0, mass_ = 0;
    }

    void Trapezium::initFromDialog() {
        cout << "Enter trapezium's sides - x, y, x1, y1 :\n";
        cin >> x >> y >> x1 >> y1;
        cout << "Enter trapezium's height :\n";
        cin >> h;
        cout << "Enter trapezium's mass :\n";
        cin >> mass_;
    }

    double Trapezium::square() {
        return (1 / 2) * h *(x + y);
    };

    double Trapezium::perimeter() {
        return x + y + x1 + y1;
    };

    double Trapezium::mass() const {
        return mass_;
    };

    CVector2D Trapezium::position() {
        CVector2D answer;
        answer.x = x;
        answer.y = y;
        return answer;
    };

    bool Trapezium::operator==(const IPhysObject &obj) const {
        return (mass_ == obj.mass());
    };

    bool Trapezium::operator<(const IPhysObject &obj) const {
        return (mass_ < obj.mass());
    }

    void Trapezium::draw() {
        cout << "sides of trapezium: " << x << y << x1 << y1 << "\n";
        cout << "height of trapezium:" << h << "\n";
        cout << "Mass: " << mass_ << "\n";
    }

    const char *Trapezium::classname() {
        return typeid(this).name();
    };

    unsigned int Trapezium::size() {
        return sizeof *this;
    };

    Menu::Menu() {
        type = 0;
    };

    void Menu::setFunc() {
        std::cout << "Choose type of the operation:\n";
        std::cout << "1 - Add Leght\n";
        std::cout << "2 - Add Isosceles trapezium\n";
        std::cout << "3 - Show all figures\n";
        std::cout << "4 - Show total square of figures\n";
        std::cout << "5 - Show total perimeter of figures\n";
        std::cout << "6 - Show center mass of all figures\n";
        std::cout << "7 - Show total memory that objects occupy\n";
        std::cout << "8 - Sort all figures by mass\n\n";
        std::cin >> type;
    };

    void Menu::Func() {
        switch (type) {

            case 0:
                cout << "Type of operation not found!\n";
                break;

            case 1:
                createFigure<Leght>();
                break;

            case 2:
                createFigure<Trapezium>();
                break;

            case 3:
                cout << "All figures: " << endl;
                for (int i = 0; i < pointers.size(); ++i) {
                    cout << "Number: " << i + 1 << endl;
                    pointers[i]->draw();
                }
                cout << endl;
                break;
            case 4:
                cout << "Total square:" << endl;
                cout << sum_squares << endl;
                break;

            case 5:
                cout << "Total perimeter:" << endl;
                cout << sum_perimeters << endl;
                break;

            case 6:
                cout << "Total center mass:" << endl;
                cout << sum_mass << endl;
                break;

            case 7:
                cout << "Total memory used:" << endl;
                cout << sum_size << endl;
                break;

            case 8:
                sort(pointers.begin(), pointers.end(),
                     [](BaseFigure *lhs, BaseFigure *rhs) {
                         return *lhs < *rhs;
                     }
                );
                break;
            default:
                cout << "Unknown function" << endl;
                break;
        }
    };

}
