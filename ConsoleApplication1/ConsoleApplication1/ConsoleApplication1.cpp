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
	string getPassword() {
		return password;
	}
};
int main()
{
	int userName, password;
	string userName, password;
	cout << "Enter your username: ";
	cin >> userName;
	cout << "Enter your password: ";
	cin >> password;

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