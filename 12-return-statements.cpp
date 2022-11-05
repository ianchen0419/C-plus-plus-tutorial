#include <iostream>

using namespace std;

double cube(double num) {
//    double result = num * num * num;
//    return result;
    return num * num * num;
    cout << "hello"; // never print out
}

int main() {
    
    double answer = cube(5.0);
    
    cout << answer << endl;
     
    return 0;
}
