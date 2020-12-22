#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void EraseSpacesAtSides(string& str);
void ReplaceSpaces(string& str);

int main()
{
	string str = "asf    dsa      fwer          rewsa";

	EraseSpacesAtSides(str);
	ReplaceSpaces(str);

	cout << str << endl;
}

void EraseSpacesAtSides(string& str)
{
	string reverseStr = str;
	reverse(reverseStr.begin(), reverseStr.end());

	while (reverseStr[0] == ' ')
	{
		str.pop_back();
		reverseStr.erase(0, 1);
	}

	while (str[0] == ' ')
	{
		str.erase(0, 1);
	}
}

void ReplaceSpaces(string& str)
{
	for (size_t i = 0; i < str.size(); ++i)
	{
		if (str[i] == ' ')
		{
			while (str[i] == ' ')
				str.erase(i, 1);

			str.insert(str.begin() + i, ' ');
		}
	}
}
