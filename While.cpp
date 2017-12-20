#include "iostream"
using namespace std;

int password, qwerty;
int main(){
	cout << "Enter the password" << endl;
	cin >> password;
	while(password!=qwerty){
		cout << "Incorrect password!" << endl << "Enter again" << endl;
		cin >> password;
	}
	if (password==qwerty){
		cout << "WELCOME!" << endl;
	} 
}
