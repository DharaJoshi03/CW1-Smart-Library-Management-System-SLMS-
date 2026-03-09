#include <iostream>
#include <string>
using namespace std;

class LibrarySystem{
private:
	string password;
public:
		LibrarySystem(string pass) : password(pass) {}
	bool authenticate(string inputPassword) {
		return inputPassword == password;
	}
	string setPassword(string newPassword) {
		password = newPassword;
		return "Password created successfully.";
	}
	string setuserName(string newUsername) {
		// Assuming we have a username variable to set
		// username = newUsername;
		return "Username created successfully.";
	}
	string getuserName() {
		// Assuming we have a username variable to return
		// return username;
		return "Username retrieval is implemented.";
	}
	string onlineAccess() {
		return "Online access granted.";
	}
	string getPassword() {
		return password;
	}
};
int main()
{
	int userName, password;
	string userName, password;
	string onlineAccess;
	cout << "Enter your username: ";
	cin >> userName;
	cout << "Enter your password: ";
	cin >> password;
	cout << "Online Access is granted " ;
	cin >> onlineAccess;
	cout << "Hello, " << userName << "! Welcome to the Library System." << endl;
	return 0;
}
class User {
private:
	string user_registration;
	string user_authentcation;
public:
	User(string user_registration, string user_authentcation) : user_registration(user_registration), user_authentcation(user_authentcation) {
	}
	string getUserRegistration() {
		return user_registration;
	}
	string getUserAuthentication() {
		return user_authentcation;
	}

};
int main() {
	string user_registration, user_authentcation;
	cout << "Registration is completed: ";
	cin >> user_registration;
	cout << "Authentication is verified: ";
	cin >> user_authentcation;
	User user(user_registration, user_authentcation);
	cout << "User Registration: " << user.getUserRegistration() << endl;
	cout << "User Authentication: " << user.getUserAuthentication() << endl;
	return 0;
}
class Admin {
private:
	int admin_age;
	string admin_password;
public:
	string admin_name;
	int admin_id;
	Admin(string admin_name, int admin_age, int admin_id, string admin_password) : admin_name(admin_name), admin_age(admin_age), admin_id(admin_id), admin_password(admin_password) {
	}
};
int main() {
	string admin_name, admin_password;
	int admin_age, admin_id;
	cout << "Enter Admin Name: ";
	cin >> admin_name;
	cout << "Enter Admin Age: ";
	cin >> admin_age;
	cout << "Enter Admin ID: ";
	cin >> admin_id;
	cout << "Enter Admin Password: ";
	cin >> admin_password;
	Admin admin(admin_name, admin_age, admin_id, admin_password);
	cout << "Admin Name: " << admin.admin_name << endl;
	cout << "Admin Age: " << admin_age << endl;
	cout << "Admin ID: " << admin_id << endl;
	return 0;
}
class Books {
public:
	string book_title;
	string book_author;
	string book_genre;
	string remove_book;
	string add_book;
	int book_pages;
	int number_of_books;
	int book_id;
	Books(string book_title, string book_author, string book_genre, int book_pages, int number_of_books, int book_id) : book_title(book_title), book_author(book_author), book_genre(book_genre), book_pages(book_pages), number_of_books(number_of_books), book_id(book_id) {
	}
};
int main() {
	string book_title, book_author, book_genre;
	int book_pages, number_of_books, book_id;
	cout << "Enter Book Title: ";
	cin >> book_title;
	cout << "Enter Book Author: ";
	cin >> book_author;
	cout << "Enter Book Genre: ";
	cin >> book_genre;
	cout << "Enter Book Pages: ";
	cin >> book_pages;
	cout << "Enter Number of Books: ";
	cin >> number_of_books;
	cout << "Enter Book ID: ";
	cin >> book_id;
	Books book(book_title, book_author, book_genre, book_pages, number_of_books, book_id);
	cout << "Book Title: " << book.book_title << endl;
	cout << "Book Author: " << book.book_author << endl;
	cout << "Book Genre: " << book.book_genre << endl;
	cout << "Book Pages: " << book_pages << endl;
	cout << "Number of Books: " << number_of_books << endl;
	cout << "Book ID: " << book_id << endl;
	return 0;
}
class Members {
private:
	int member_age;
public:
	string member_name;
	int member_id;
	Members(string member_name, int member_age, int member_id) : member_name(member_name), member_age(member_age), member_id(member_id) {
	}
};
int main() {
	string member_name;
	int member_age, member_id;
	cout << "Enter Member Name: ";
	cin >> member_name;
	cout << "Enter Member Age: ";
	cin >> member_age;
	cout << "Enter Member ID: ";
	cin >> member_id;
	Members member(member_name, member_age, member_id);
	cout << "Member Name: " << member.member_name << endl;
	cout << "Member Age: " << member_age << endl;
	cout << "Member ID: " << member_id << endl;
	return 0;
}