#ifndef FUN_H
#define FUN_H
#include <string>
#include <vector>
#include <iostream>

using namespace std;
template<typename Type>
void swap_(Type& a, Type& b)
{
    Type tmp = a;
    a = b;
    b = tmp;
    cout << a << ", " << b << endl;
}

template <int N, class T>
class My_array
{
private:
    vector<T> store;
public:
    My_array(){};
    void print(int ind){
        cout << store[ind]<<endl;
    }
    void push(T elem){
        store.push_back(elem);
    }
    void ind(int ind)
    {
        try {
            if (ind <= N){
            }
            else throw out_of_range("Index error");
        }
        catch (out_of_range){
            cout<<"Index error"<<endl;
        }
    }
};

#endif //FUN_H