#include <iostream>

using namespace std;

int main() {
    
    int age;
    
    cout << "Enter your age: ";
    cin >> age; // cin通常用在int, double, char
    
    cout << "You are " << age << " years old" << endl;
    
    string name;
    
    cout << "Enter your name: ";
    getline(cin, name); // 一整行的字串
    
    cout << "Hello " << name << endl;
    
    return 0;
}
