#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Book{
public:
    string title;
    string author;
    string category;
    int year;

    Book(string t, string a, string c, int y) : title(t), author(a), category(c), year(y){}

};

class Library{
private:
    vector<Book> books;

public:
    void addBook(const Book& book);
    void listBook();
    void searchByTitle(const string& keyword);
    void sortByTitle();
    void sortByYear();
    void listByCategory(const string& category);
};

void Library::addBook(const Book& book){
    books.push_back(book);
    }
    
void Library::listBook() {
    for(const auto&book : books){
        cout << book.title << ", " << book.author << ", " << book.category << ", " << book.year << endl;
    }
}

void Library::searchByTitle(const string& keyword){
    for(const auto& book : books){
        if(book.title.find(keyword) != string::npos){
            cout << book.title << ", " << book.author << ", " << book.category << ", " << book.year << endl;
        }
    }
}

void Library::sortByTitle(){
    sort(books.begin(), books.end(), [](const Book& a, const Book& b){
        return a.title < b.title;
    });
}

void Library::sortByYear(){
    sort(books.begin(), books.end(), [](const Book& a, const Book& b){
        return a.year < b.year;
    });
}

void Library::listByCategory(const string& category){
    for(const auto& book : books){
        if(book.category == category){
            cout << book.title << ", " << book.author << ", " << book.category << ", " << book.year << endl;
        }
    }
}

int main(){
    Library lib;

    lib.addBook(Book{"Harry Potter", "J.K. Rowling", "Fantasy", 1997});
lib.addBook(Book{"The Great Gatsby", "F. Scott Fitzgerald", "Classic", 1925});
lib.addBook(Book{"To Kill a Mockingbird", "Harper Lee", "Classic", 1960});
lib.addBook(Book{"The Hobbit", "J.R.R. Tolkien", "Fantasy", 1937});
lib.addBook(Book{"Steve Jobs", "Walter Isaacson", "Biography", 2011});
lib.addBook(Book{"Clean Code", "Robert C. Martin", "Programming", 2008});
    lib.listBook(); 
    string keyword;
    cout << "Please enter a keyword to search: ";
    getline(cin, keyword);
    lib.searchByTitle(keyword);

    cout << "Books are sorted by title: " <<endl;
    lib.sortByTitle();
    lib.listBook();

    cout << "Books are sorted by year: " << endl;
    lib.sortByYear();
    lib.listBook();

    string category;
    cout << "Please enter a category you want to search: ";
    getline(cin, category);
    lib.listByCategory(category);

    return 0;
}
