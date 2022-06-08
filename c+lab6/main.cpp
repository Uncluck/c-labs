#include <iostream>
#include <iterator>
#include <vector>
#include "fun.h"
using namespace std;
void Print(bool temp){
    if (temp)
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;
}
int main() {
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    cout << "all_off:" << endl;
    int pred = 1;
    Print(all_off<vector<int>, int>(v1, pred));

    cout << endl;
    cout << "all_off with CPoint:" << endl;
    int y = 1;
    int x = 1;
    CPoint<int> predic(x,y);
    vector<CPoint<int>> array_point_base;
    for (int i = 0; i < 5; i++) {
        array_point_base.push_back(predic);
    }
    Print(all_off<vector<CPoint<int>>, CPoint<int>>(array_point_base, predic));
    cout << endl;

    cout << "is_partitioned:" << endl;
    Print(is_partitioned<vector<int>, int>(v1, pred));
    cout << endl;
    cout << "is_partitioned CPoint:" << endl;
    Print(is_partitioned<vector<CPoint<int>>, CPoint<int>>(array_point_base, predic));
    cout << endl;

    cout << "find_backward:" << endl;
    cout << "place: " << find_backward<vector<int>, int>(v1, pred) << endl;
    cout << endl;
    cout << "find_backward CPoint:" << endl;
    vector<CPoint<int>> last_test;
    for (int i = 0; i < 5; i++) {
        last_test.push_back(CPoint<int>(i, i));
    }
    CPoint<int> test_point_true(x, y);
    cout << "place: " <<find_backward<vector<CPoint<int>>, CPoint<int>>(last_test, test_point_true) << endl;
    return 0;
}
