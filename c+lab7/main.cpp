#include <bits/stdc++.h>
#include "circular_buffer.h"
using namespace std;
int main() {
    const int size = 10;

    try {
        circular_buffer<int> cb(size);

        cb.push_back(2);
        cb.push_back(3);
        cb.push_back(-1);
        cb.push_front(9);
        cb.push_front(0);
        cb.pop_back();
        cb.pop_front();
        cb.push_front(-9);

        cout << "NOsort buffer: " << std::endl;
        cb.print();
        cout << std::endl;

        sort(cb.begin(), cb.end());

        cout << "sort Buffer: " << endl;
        cb.print();
        cout << endl;

        cb.shrink_to_fit();
        cb.print();
    } catch (bad_alloc) {
        cerr << "Ne udalos videlit pamat pod buffer" << endl;
        return 1;
    } catch (Exception & exception) {
        cerr << exception.what() << endl;
        return 1;
    }
}
