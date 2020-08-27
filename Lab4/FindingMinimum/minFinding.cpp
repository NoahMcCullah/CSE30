#include <iostream>
#include "FindMin.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "Please enter size" << endl;
    int size;
    cin >> size;

    const int len = size;
    
    int numbers[len];
    
    cout << "Please enter array data" << endl;
    for (int i = 0; i < len; i++) {
        cin >> numbers[i];
    }
    
    cout << "Please enter start" << endl;
    int start;
    cin >> start;
    
    cout << "Please enter end" << endl;
    int end;
    cin >> end;
    
    int minIndex = findMin(numbers, start, end);
    
    cout << "Smallest number in range (" << start << " - " << end << "): " << numbers[minIndex] << endl;
    
    return 0;
}