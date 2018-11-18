#include<iostream>
using namespace std;

class Box {
public:
	// Define length & breadth & height of a box
	double length, breadth, height;

};




int main(){

Box Box1, Box2; // Define the objects Box1 & Box2 of type box
double volume; // store volume of a box

// Box1 specification
Box1.length = 15;
Box1.breadth = 12;
Box1.height = 6;

// Box2 specification
Box2.length = 9;
Box2.breadth = 13;
Box2.height = 14;

// volume of Box1
volume = Box1.length*Box1.breadth*Box1.height;
cout << "Volume of Box1 : " << volume << endl;


// volume of Box2
volume = Box2.length*Box2.breadth*Box2.height;
cout << "Volume of Box2 : " << volume << endl;

return 0;
}
