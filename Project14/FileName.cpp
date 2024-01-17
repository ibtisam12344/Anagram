#include<iostream>
using namespace std;
#include<string>
int main()
{
	string n1;
	int count1 = 0;
	string n2;
	int count2 = 0;
	getline(cin, n1);
	getline(cin, n2);
	for (int i = 0; i < n1.length(); i++)
	{
		count1 = count1 + int(n1[i]);
	}
	for (int i = 0; i < n2.length(); i++)
	{
		count2 = count2 + int(n2[i]);
	}
	if (count1 == count2)
	{
		cout << "Anagram";
	}
	else
	{
		cout << "not Anagram";
	}
		
	return 0;
}
