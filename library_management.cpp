#include <iostream>
#include <vector>
#include <iomanip> 
#include <string>
using namespace std;

// Function to clear the screen
void clearScreen() {
    #ifdef _WIN32
        system("cls"); // Windows
    #else
        system("clear"); // Linux/MacOS
    #endif
}

// Structure to represent a book
struct Book {
    string title;
    string author;
    string isbn;
    bool isAvailable;
};

// Vector to store books in the library
vector<Book> library;

// Function to display the list of books
void displayBooks() {
    clearScreen();
    cout << "\n==================== LIBRARY BOOKS ====================\n";
    if (library.empty()) {
        cout << "No books available in the library.\n";
    } else {
        cout << setw(5) << "No." 
             << setw(30) << "Title" 
             << setw(20) << "Author" 
             << setw(15) << "ISBN" 
             << setw(15) << "Status\n";
        cout << "-------------------------------------------------------\n";
        for (size_t i = 0; i < library.size(); ++i) {
            cout << setw(4) << i + 1 << ". " 
                 << setw(30) << library[i].title 
                 << setw(20) << library[i].author 
                 << setw(15) << library[i].isbn 
                 << setw(15) << (library[i].isAvailable ? "Available" : "Checked Out") 
                 << "\n";
        }
    }
    cout << "=======================================================\n";
}

// Function to add a book to the library
void addBook() {
    clearScreen(); 
    Book newBook;
    cout << "Enter book title: ";
    cin.ignore();
    getline(cin, newBook.title);
    cout << "Enter book author: ";
    getline(cin, newBook.author);
    cout << "Enter book ISBN: ";
    getline(cin, newBook.isbn);
    newBook.isAvailable = true; // Newly added books are always available
    library.push_back(newBook);
    cout << "Book added successfully!\n";
}

// Function to search for a book
void searchBook() {
    clearScreen(); 
    string query;
    cout << "Enter the title, author, or ISBN of the book to search: ";
    cin.ignore();
    getline(cin, query);

    cout << "\n==================== SEARCH RESULTS ====================\n";
    bool found = false;
    for (const auto& book : library) {
        if (book.title == query || book.author == query || book.isbn == query) {
            cout << "Title: " << book.title 
                 << ", Author: " << book.author 
                 << ", ISBN: " << book.isbn 
                 << ", Status: " << (book.isAvailable ? "Available" : "Checked Out") << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "No book found matching the query.\n";
    }
    cout << "=======================================================\n";
}

// Function to check out a book
void checkoutBook() {
    clearScreen(); 
    displayBooks();
    if (library.empty()) return;

    int bookIndex;
    cout << "Enter the book number to check out: ";
    cin >> bookIndex;

    if (bookIndex > 0 && bookIndex <= library.size() && library[bookIndex - 1].isAvailable) {
        library[bookIndex - 1].isAvailable = false;
        cout << "Book checked out successfully!\n";
    } else {
        cout << "Invalid book number or book is already checked out.\n";
    }
}

// Function to return a book
void returnBook() {
    clearScreen(); 
    displayBooks();
    if (library.empty()) return;

    int bookIndex;
    cout << "Enter the book number to return: ";
    cin >> bookIndex;

    if (bookIndex > 0 && bookIndex <= library.size() && !library[bookIndex - 1].isAvailable) {
        library[bookIndex - 1].isAvailable = true;
        cout << "Book returned successfully!\n";
    } else {
        cout << "Invalid book number or book is already available.\n";
    }
}

// Main function
int main() {
    int choice;

    cout << "\n<<<<<<<<<<<<<<<<< LIBRARY MANAGEMENT SYSTEM >>>>>>>>>>>>>>>>>>\n";

    do {
        clearScreen(); 
        cout << "\n==================== MAIN MENU ====================\n";
        cout << "1. Add a Book\n";
        cout << "2. View All Books\n";
        cout << "3. Search for a Book\n";
        cout << "4. Check Out a Book\n";
        cout << "5. Return a Book\n";
        cout << "6. Exit\n";
        cout << "===================================================\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                checkoutBook();
                break;
            case 5:
                returnBook();
                break;
            case 6:
                cout << "\nThank you for using the Library Management System! Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 6.\n";
        }

        if (choice != 6) {
            cout << "\nPress Enter to continue...";
            cin.ignore();
            cin.get(); // Wait for the user to press Enter
        }

    } while (choice != 6);

    return 0;
}
