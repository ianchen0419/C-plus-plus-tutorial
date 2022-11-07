#include <iostream>

using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;
};

int main() {

    
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "J.K. Rowling";
    book1.pages = 500;
    
    cout << book1.title << endl;
    
    Book book2;
    book2.title = "Lord of Rings";
    book2.author = "Tolkein";
    book2.pages = 700;
    
    return 0;
}
