#include "fun.h"
using namespace std;
int main()
{
    int a = 5;
    int b = 3;
    swap_(a, b);
    cout << endl;
    My_array<3, int> array;
    array.push(4);
    array.push(5);
    array.push(7);
    array.ind(7);
    array.print(0);
    return 0;
}
