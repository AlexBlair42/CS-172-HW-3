#include <iostream>
#include <cmath>
#include <string>


using namespace std;

class QuadraticFormula{
private:
	double a, b, c;

public:
	QuadraticFormula(double a, double b, double c)
		:a(a), b(b), c(c)
		// Not sure what this is, but after talking with Kathleen and looking online to make this work, this seems to be the key.
	{
	}
	double geta() 
	{
		return a;
	}

	double getb() 
	{
		return b;
	}

	double getc() 
	{
		return c;
	}

	double getDiscriminant()
	{
		 return (b * b - 4 * a * c); 
	}

	double getRoot()
	{
		if (getDiscriminant() < 0)
		{
			return 0;
		}
		else
			return (-b + sqrt(getDiscriminant())) / (2 * a);
	}

	double getRoot2()
	{
		if (getDiscriminant() < 0)
		{
			return 0;
		}
		else
			return (-b - sqrt(getDiscriminant())) / (2 * a);
	}


};







int main()
{
	cout << "Please enter values for a,b,and c. " << endl;
	
	double a;
	double b;
	double c;
	double discriminant;
	
	
	// user enters values for a, b, and c
	cin >> a;
	cin >> b;
	cin >> c;

	QuadraticFormula Formula(a, b, c);
	discriminant = Formula.getDiscriminant();



	if (discriminant < 0)
	{
		cout << "There are no real roots." << endl;
	}
	else if (discriminant == 0)
	{
		cout << "There is only one root and it is " << Formula.getRoot() << endl;
	}
	else 
	{
		cout << "The two roots are " << Formula.getRoot() << " and "
			<< Formula.getRoot2() << endl;
	}


	return 0;
}