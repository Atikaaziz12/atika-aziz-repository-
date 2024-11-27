#include<iostream>
#include<string>
using namespace std;

struct Book {
    string title;
    string author;
    int year;
    int pages;
};

void displayBookInfo(const Book &book) {
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Year: " << book.year << endl;
    cout << "Pages: " << book.pages << endl;
}

int main() {
    Book books[5];
    for (int i = 0; i < 5; ++i) {
        cout << "Enter details for book " << i+1 << ":" << endl;
        cout << "Title: ";
        cin >> books[i].title;
        cout << "Author: ";
        cin >> books[i].author;
        cout << "Year: ";
        cin >> books[i].year;
        cout << "Pages: ";
        cin >> books[i].pages;
    }
    
    cout << "\nBook Information:" << endl;
    for (int i = 0; i < 5; ++i) {
        displayBookInfo(books[i]);
        cout << endl;
    }

    return 0;
}
