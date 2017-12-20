#include "iostream"
#include "string"

using namespace std;

int main()
{
	string password;
	string key = "qwerty";
	cout << "Enter the password" << endl;
	cin >> password;
	while (password != key)
	{
		cout << "Incorrect password!" << endl << "Enter again" << endl;
		cin >> password;
	}
	if (password == key)
	{
		cout << "WELCOME!" << endl;
	}