#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum) {
    string dayName;
    
    switch (dayNum) {
        case 0:
            dayName = "Sunday";
            break; // 如果沒下break，即使dayNum為0，dayName也設定好為"Sunday"，c++還是會繼續往下比對，繼續往下執行程式（c++的fall through特性）
            
        case 1:
            dayName = "Monday";
            break;
            
        case 2:
            dayName = "Tuesday";
            break;
            
        case 3:
            dayName = "Wednesday";
            break;
            
        case 4:
            dayName = "Thursday";
            break;
            
        case 5:
            dayName = "Friday";
            break;
            
        case 6:
            dayName = "Saturday";
            break;
            
        default:
            dayName = "Invalid day number";
    }
    
    return dayName;
}

int main() {
    
    cout << getDayOfWeek(0) << endl;
     
    return 0;
}
