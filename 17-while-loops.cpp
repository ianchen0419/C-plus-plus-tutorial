#include <iostream>

using namespace std;


int main() {
    
    int index = 1;
    // while的條件滿足的情況下，重複執行程式
    while(index <= 5) {
        cout << index << endl;
        index++;
    }
    
    // do while loop：一樣會在while條件滿足的情況下執行程式，但是因為while條件寫在後面，所以不管有沒有滿足，都會先執行一次
    int index2 = 100;
    do {
        cout << index2 << endl; // 一定會噴出100
        index2++;
    } while(index2 <= 5);
     
    return 0;
}
