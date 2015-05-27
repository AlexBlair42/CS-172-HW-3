#include <iostream>
#include <string>

using namespace std;



string sort(string &s)
{
	for (int i = s.length() - 1; i >= 1; i--)
	{


		char maxLetters = s[0];
		int CurrentLetters = 0;

		
		
		for (int j = 1; j <= i; j++)
		{
			if (maxLetters < s[j])
			{
				maxLetters = s[j];
				CurrentLetters = j;
			}
		}

	
		if (CurrentLetters!= i)
		{
			s[CurrentLetters] = s[i];
			s[i] = maxLetters;
		}
	}
	return s;
}





int main()
{
	
	cout << "Please enter a string for s: ";
	
	
	string s;
	getline(cin, s);

	
	cout << "The alphabetical and case-sesitive sorted string is " << sort(s) << endl;




	return 0;
}