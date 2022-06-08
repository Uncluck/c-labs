#include "fun.h"
#include <Queue>
#include<Complex>
using namespace std;
namespace fun {
Compl::Compl(): value(complex<double>(0, 0)){};
Compl::Compl(double Re, double Im): value(complex<double>(Re, Im)){};
void Compl::operator+(Compl &a) {
    double real;
    double imag;
    real=value.real()+a.value.real();
    imag=value.imag()+a.value.imag();
    value = complex<double>(real, imag);
};
void Compl::operator*(Compl &a) {
    double real;
    double imag;
    real=value.real()*a.value.real();
    imag=value.imag()*a.value.imag();
    value = complex<double>(real, imag);
}
void Compl::operator*(double value_) {
    double real;
    double imag;
    real=value.real()*value_;
    imag=value.imag()*value_;
    value = complex<double>(real, imag);
}
Queue::Queue() {
    size = 0;
}

// Setters
void Queue::setSize(int s) {
    size++;
}
void Queue::pushElem(int x) {
    if (size >= 100) {
        std::cout << "Queue is already full!\n";
    }
    else {
        que.push(x);
        size++;
    }

}

double Queue::popElem() {
    if (size <= 0) {
        cout << "Queue is empty!\n";
    }
    else {
        int a = que.front();
        que.pop();
        size--;
        return a;
    }
}
void Queue::printQueue() {
    while(!que.empty()){
        int val = que.front();
        que.pop();
        cout << val << " ";
    }
}

// Push and pop
void operator << (Queue& qu, int elem) {
    qu.pushElem(elem);
}
void operator >> (Queue& qu, int& a) {
    a = qu.popElem();
}

}
