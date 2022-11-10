#include <iostream>
#include <string>
using namespace std;
int Count(const string s)
{
	size_t pos = 0;
	int k = 0;
	while ((pos = s.find('+', pos)) != -1)
	{
		k++;
		pos++;
	}
	while ((pos = s.find('=', pos)) != -1)
	{
		k++;
		pos++;
	}
	while ((pos = s.find('-', pos)) != -1)
	{
		k++;
		pos++;
	}
	return k;
}
string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('+', pos)) != -1)
			s.replace(pos, 1, "**");
	pos = 0;
	while ((pos = s.find('-', pos)) != -1)
		s.replace(pos, 1, "**");
	pos = 0;
	while ((pos = s.find('=', pos)) != -1)
		s.replace(pos, 1, "**");
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "String contained " << Count(str) << " groups of '+ -'" << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
		return 0;
}