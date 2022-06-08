#include "fun.h"
#include <iostream>
#include <vector>
using namespace std;
namespace fun {
    template < typename T > T get_max (const vector<T>&array) {
        T max;
        try
        {
            if (array.size()<=0) throw out_of_range{"Vector::operator[]"};
            max = array[0];
            for(int i = 1; i < array.size(); i++) {
                if (array[i]>max) max = array[i];
            }
            return max;
        }
        catch (out_of_range)
        {
            std::cout << "No elements in vector" << std::endl;
        }
        return T(false);
    }

    template < size_t N, typename T> void Stack<N, T>::push(T value) {
        try {
            if (stack_.size()==maxSize) throw out_of_range{""};
            stack_.push_back(value);
        }
        catch (out_of_range) {
            {
                std::cout << "Stack is full" << std::endl;
            }
        }
    }
    template < size_t N, typename T> T Stack<N, T>::pop() {
        try {
            if (stack_.empty()) throw std::runtime_error{""};
            T el = stack_.back();
            stack_.pop_back();
            return el;
        }
        catch (std::runtime_error) {
            {
                std::cout << "Stack is empty" << std::endl;
            }
        }
        return T(false);
    }
}