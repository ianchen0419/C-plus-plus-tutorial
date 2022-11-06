#include <iostream>

using namespace std;

int main() {
    
    // pointer is memory address
    
    int age = 19; // 19 is stored in a container in memory
    // also can create a pointer variable
    int *pAge = &age;
    
    double gpa = 2.7;
    double *pGpa = &gpa;
    
    string name = "Mike";
    string *pName = &name;
    
    // each of container has an address of RAM
    
    cout << &age << endl; // 0x16fdff208
    cout << pAge << endl; // 0x16fdff208
    
    // derefrecing反參照：從一個memory address中取出值
    cout << *pAge << endl;
    
    cout << &gpa << endl; // 0x16fdff1f8
    cout << *&gpa << endl; // 2.7
    
    
    return 0;
}
