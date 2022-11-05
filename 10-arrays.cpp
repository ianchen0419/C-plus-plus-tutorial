#include <iostream>

using namespace std;

int main() {
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    
    cout << luckyNumbers[0] << endl; // 4
    cout << luckyNumbers[2] << endl; // 15
    
    luckyNumbers[0] = 19;
    cout << luckyNumbers[0] << endl; // 19
    
    // 指定儲存數量：告訴C++，這個陣列需要存20個數字
    int numbers[20] = { 1, 2, 3, 4, 5 };
    
    numbers[10] = 100;
    
    cout << numbers[6] << endl; // 0
    cout << numbers[10] << endl; // 100
    
    return 0;
}
