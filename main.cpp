#include "module.h"

#include <iostream>
using std::cout;
using std::endl;

int main() {
    int myData[] = {4, 3, 6, 1, -5, 2, 0, 8, 12, 5, 9};
    const int SIZE = 10;
    int position, value;

    for ( int i= 0; i < 15; ++i){
        position = LinearSearch(myData, SIZE, i);
        if (position == -1){
            cout << i << " not found in the array" << endl;
        }
        else {
            cout << i << " found in position " << LinearSearch(myData, SIZE, i) << endl;
        }
    }

    return 0;
}
