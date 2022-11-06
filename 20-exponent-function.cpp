#include <iostream>

using namespace std;

int power(int baseNum, int powerNum) {
    int result = 1;
    
    for(int i = 0; i < powerNum; i++) {
        result = result * baseNum;
    }
    
    return result;
}

int main() {
    
    // exponent: 3, 4 -> 3^4 -> 3*3*3*3 -> 81
    
    cout << power(2, 3) << endl;
    
    return 0;
}
