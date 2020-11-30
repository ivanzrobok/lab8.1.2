#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;



bool find1(char* string, int i)
{

	if (strlen(string) < 4)
		return false;
	if (string[i + 3] != 0)
	{
		if (string[i] == string[i + 1] && string[i + 2] == string[i + 3] && string[i] == string[i + 3])
			return true;
		else
			return find1(string, i + 1);
	}
	else
		return false;
}
int main()
{
	char str[100];
	cout << "Enter string " << endl;
	cin.getline(str, 99);

	cout << endl << "Visit four elements ";
	if (find1(str, 0) == 1)
		cout << "yes";
	else
		cout << "no";
	cout << endl;

	/*char* dest = new char[151];
	dest = change(str);

	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;*/
}

