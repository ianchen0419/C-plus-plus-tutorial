#include <iostream>

using namespace std;

// void：表示此函式不會回傳任何東西
void sayHi() {
    cout << "Hello User" << endl;
}

// function signature：先定義好函式名稱，然後再補完函式內容，讓main可以提前呼叫沒定義好的函式
void sayHiWithName(string name, int age);

int main() {
    
    cout << "Top" << endl;
    // 離開main函式，跳躍到sayHi的程式碼內，執行sayHi程式碼後，回到main裡面繼續執行未完成的函式
    sayHi();
    cout << "Bottom" << endl;
    
    sayHiWithName("Mike", 60);
    sayHiWithName("Tom", 45);
    sayHiWithName("Steve", 19);
     
    return 0;
}
 
void sayHiWithName(string name, int age) {
    cout << "Hello " << name << ", ";
    cout << "you are " << age << endl;
}
