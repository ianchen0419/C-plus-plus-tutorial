#include <iostream>

using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;
    
    // multiple constructor：給一些缺資料的實例化對象使用
    Book() {
        title = "no title";
        author = "no author";
        pages = 0;
    }
    
    Book(string aTitle, string aAuthor, int aPages) {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};

int main() {

    // 由於手動賦值很花時間，所以改用constructor function處理賦值：
    Book book1("Harry Potter", "J.K.Rowling", 500);
    book1.title = "New Title";
    
    Book book2;
    
    cout << book2.title << endl; // no title
    
    return 0;
}
