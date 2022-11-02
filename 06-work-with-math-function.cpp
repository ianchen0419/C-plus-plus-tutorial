#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    // 在文件開頭引入cmath，可以使用數學函數
    cout << pow(2, 5) << endl; // 2的5次方，32
    
    cout << sqrt(36) << endl; // 平方根，6
    
    cout << round(4.3) << endl; // 四捨五入，4
    cout << round(4.6) << endl; // 四捨五入，5
    
    cout << ceil(4.1) << endl; // 無條件進位，5
    
    cout << floor(4.9) << endl; // 無條件捨去，4
    
    cout << fmax(4, 10) << endl; // find max, 10
    cout << fmin(4, 10) << endl; // find min,  4
    
    return 0;
}
