#include <iostream>

using namespace std;

int main() {
    
    // 2-dimension array：一個陣列中的每個元素都是另一個陣列
    // [3]表示大陣列中有3個小陣列
    // [2]表示小陣列中有2個數字
    int numberGrid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6},
    };
    
    cout << numberGrid[0][1] << endl; // 2
    
    int numberGridRows = sizeof(numberGrid) / sizeof(numberGrid[0]);
    int numberGridCols = sizeof(numberGrid[0]) / sizeof(int);
    
    for(int i = 0; i < numberGridRows; i++) {
        for(int j = 0; j < numberGridCols; j++) {
            cout << numberGrid[i][j];
        }
        
        cout << endl;
    }
    
    
    return 0;
}
