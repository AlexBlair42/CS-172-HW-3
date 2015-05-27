#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class EvenNum {
private:
	
	int value; 

public:
	EvenNum(){
		
		const int zero = 0;
	
	}

	EvenNum(int Newvalue) {
	value = Newvalue;
	}

	int getValue()
	{
		cout << "The current value is " << value << endl;
		return value;
	}

	int getNext()
	{
		int Next;
		Next = value + 2;
		cout << "The next number is " << Next << endl;
		return Next;
	}

	int getPrevious()
	{
		int Previous;
		Previous = value - 2;
		cout << "The previous number is " << Previous << endl;
		return Previous;
	}
};




int main()
{
	EvenNum number (16); 
	number.getValue();
	number.getNext();
	number.getPrevious();



	return 0; 
}