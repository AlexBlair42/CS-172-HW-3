#include <iostream>
#include <string>

using namespace std;

class Fan{
public:
	
	int speed;

	bool on;

	double radius;


	Fan() {
		speed = 1;
		
		on = false;
		
		radius = 5.0;
	}
	
	Fan(int s, bool o, double r){
		speed = s;
		
		on = o;
		
		radius = r;
	}
};

int main()
{

	Fan f1;

	cout << "The Speed of fan 1 is " << f1.speed << endl;
	cout << "Fan 1 is currently off, denoted by " << f1.on << endl;
	cout << "The radius of fan 1 is " << f1.radius << endl;

	cout << endl;

	Fan f2(3, true, 10.0);

	cout << "The speed of fan 2 is " << f2.speed << endl;
	cout << "The second fan is on, denoted by " << f2.on << endl;
	cout << "The radius of fan 2 is " << f2.radius << endl;

	cout << endl;

	
	Fan f3(2, false, 5.0);
	
	
	cout << "The speed for fan 3 is " << f3.speed << endl;
	cout << "The third fan is set to off, denoted by " << f3.on << endl;
	cout << "The radius of the third fan is " << f3.radius << endl;

	cout << endl;

	return 0;
}