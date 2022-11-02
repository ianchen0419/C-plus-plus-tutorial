#include <iostream>

using namespace std;

int main() {
    
    // break line
    
    cout << "Giraffe Academy\n";
    
    cout << "Hello" << endl;
    
    // string variable
    
    string phrase = "Giraffe Academy";
    
    cout << phrase << endl;
    
    // string function
    cout << phrase.length() << endl; // 15
    
    cout << phrase[0] << endl; // "G"
    
    phrase[0] = 'B';
    cout << phrase << endl; // "Biraffe Academy"
    
    // find，尋找，回傳索引整數
    cout << phrase.find("Academy", 0 ) << endl; // 8
    // find()的第一個參數是必填，填入想要找的字串
    // find()的第二個參數是選填，填入想從哪一個索引值開始找，預設值是0
    
    // substring，擷取，回傳字串
    string phrasesub;
    phrasesub = phrase.substr(8, 3);
    cout << phrasesub << endl; // "Aca"
    // substr()的第一個參數是選填，填入擷取開始的索引值，預設是0
    // substr()的第二個參數是選填，填入要抓出多少字，預設是-1 (phrase.npos)
    
    
    
    
    return 0;
}
