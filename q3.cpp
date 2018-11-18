#include<iostream>
using namespace std;

// Define a class for rectangle
class rectangle{

public:
	double length, breadth;	// Define length and breadth of the rectangle

double area(void); // member function to store area of rectangle
double perimeter(void);	// member function to store perimeter of rectangle

};

// function that calculates and returns area
double rectangle::area(void){
return length*breadth;
}

// function that calculates and returns perimeter
double rectangle::perimeter(void){
return 2*(length+breadth);
}



int main(){

// define objects r1 and r2 of type rectangle
rectangle r1, r2;
double length, breadth;

// ask user to enter length and breadth of r1
cout << "Enter length of Rectangle1: ";
cin >> length;
r1.length = length;
cout << "Enter breadth of Rectangle1: ";
cin >> breadth;
r1.breadth = breadth;

// ask user to enter length and breadth of r2
cout << "Enter length of Rectangle2: ";
cin >> length;
r2.length = length;
cout << "Enter breadth of Rectangle2: ";
cin >> breadth;
r2.breadth = breadth;

// comparing area of r1 and r2
if(r1.area()==r2.area())	cout << "Area of Rectangle1 = Area of Rectangle2" << endl;
else if(r1.area()>r2.area())	cout << "Area of Rectangle1 > Area of Rectangle2" << endl;
else if(r1.area()<r2.area())	cout << "Area of Rectangle1 < Area of Rectangle2" << endl;


// comparing perimeter of r1 and r2
if(r1.perimeter()==r2.perimeter())	cout << "Perimeter of Rectangle1 = Perimeter of Rectangle2" << endl;
else if(r1.perimeter()>r2.perimeter())	cout << "Perimeter of Rectangle1 > Perimeter of Rectangle2" << endl;
else if(r1.perimeter()<r2.perimeter())	cout << "Perimeter of Rectangle1 < Perimeter of Rectangle2" << endl;



return 0;
}
