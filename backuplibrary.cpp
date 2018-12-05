#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Book {
public:
    string author, title;
    bool rented;

    Book(string &author, string &title, bool rented) {
        this -> author = author;
        this -> title = title;
        this -> rented = rented;
    };
    void display(void);
};

class MATHBook:public Book {
    int amount, RlYear;
    string language;
    MATHBook *head, *next;
public:
    MATHBook(string &author, string &title, bool rented, int amount, string &language, int RlYear):Book(author, title, rented) {
        head = NULL;
        this -> language = language;
        this -> amount = amount;
        this -> RlYear = RlYear;
    };
    ~MATHBook(void) {
        delete head;
    };
    void display(void);
    void add(void);
    void dellete(string&);
};

class Literature:public Book {
    string bookType;
    Literature *head, *next;
public:
    Literature(string &author, string &title, bool rented, string &bookType):Book(author, title, rented) {
        head = NULL;
        this -> bookType = bookType;
    };
    ~Literature(void) {
        delete head;
    };
    void display(void);
    void add(void);
};

void MATHBook::add(void) {
    string author, title, language;
    int year, amount;
    bool rented;

    cout << endl << "Author: ", cin >> author;
    cout << "Title: ", cin >> title;
    cout << "Rented? (0/1): ", cin >> rented;
    cout << "The amount of books: ", cin >> amount;
    cout << "Language: ", cin >> language;
    cout << "Release year: ", cin >> year;

    MATHBook *p = new MATHBook(author, title, rented, amount, language, year);
    p -> next = head;
    head = p;
}

void MATHBook::display(void) {
    MATHBook *p = head;
    while(p) {
        cout << "-----------------------------\n";
        cout << "Author: " << p -> author << endl;
        cout << "Title: " << p -> title << endl;
        cout << "Is " << ((p -> rented) ? "" : "not ") << "rented" << endl;
        cout << "Amount of books: " << p -> amount << endl;
        cout << "Language: " << p -> language << endl;
        cout << "Release year: " << p -> RlYear << endl;
        cout << endl;

        p = p -> next;
    }
}

void Literature::add(void) {
    string author, title, bookType;
    bool rented;

    cout << "\nAuthor: ", cin >> author;
    cout << "Title: ", cin >> title;
    cout << "Is rented? ", cin >> rented;
    cout << "Book type (hardcover/...: ", cin >> bookType;

    Literature *p = new Literature(author, title, rented, bookType);
    p -> next = head;

    head = p;
}

void Literature::display(void) {
    Literature *p = head;
    while(p) {
        cout << "\n-----------------------------\n";
        cout << "Author: " << p -> author << endl;
        cout << "Title: " << p -> title << endl;
        cout << "Is rented? " << ((p -> rented) ? "yes" : "no") << endl;
        cout << "Book type: " << p -> bookType << endl << endl;

        p = p -> next;
    }
}

int main(int argc, char const **argv) {

    string blank = "";
    MATHBook *tehnicB = new MATHBook(blank, blank, false, 0, blank, 0);
    Literature *litB = new Literature(blank, blank, false, blank);
    int opt;

    for(;;) {

        cout << "\n\n1) Add a MATH book.\n";
        cout << "2) Display all tehnic books.\n";
        cout << "3) Add a literature book.\n";
        cout << "4) Display all literature books.\n";
        cout << "5) Exit.\n\n";

        cout << "Your option: ", cin >> opt;

        switch(opt) {
            case 1:
                tehnicB -> add();
                break;
            case 2:
                tehnicB -> display();
                break;
            case 3:
                litB -> add();
                break;
            case 4:
                litB -> display();
                break;
            case 5:
                exit(0);
            default:
                continue;
        }
    }

    return 0;
}
