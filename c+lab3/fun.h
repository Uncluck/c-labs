#pragma once
#ifndef LAB_03_1_STACK_H
#define LAB_03_1_STACK_H
using namespace std;
#include <iostream>
#include <queue>
#include <Complex>

namespace fun {
        class Compl{
        private:
            complex<double> value;
        public:
            Compl();
            Compl(double Re, double Im);
            void operator+(Compl&a);
            void operator*(Compl&a);
            void operator*(double value_);
            void length(){
                cout<<"length: "<<sqrt(pow(value.real(),2)+pow(value.imag(), 2))<<endl;
            };
            void print(){
                cout<<value.real()<<" : "<<value.imag()<<endl;
            };
        };
class Queue {

private:
    queue<int> que;
    int size = 0;

public:
    Queue();

    // Setters
    void setSize(int s);
    void pushElem(int x);

    double popElem();

    void printQueue();

};

// Push and pop
void operator << (Queue& qu, int elem);
void operator >> (Queue& qu, int& a);


}

#endif
