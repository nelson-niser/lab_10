#include<iostream>
using namespace std;




class Box{
public:
	// Define lenght, breadth, height of a box
	double length, breadth, height;

	double getVolume(void){
		return length*breadth*height;
	}

};


int main(){

Box Box1;                // Declare Box1 of type Box
Box Box2;                // Declare Box2 of type Box
double volume;     // Store the volume of a box here
 
   // box 1 specification
   Box1.length  = 6.0; 
   Box1.breadth = 7.0; 
   Box1.height  = 5.0;

   // box 2 specification
   Box2.length  = 12.0; 
   Box2.breadth = 13.0; 
   Box2.height  = 10.0;

   // volume of box 1
   cout << "Volume of Box1 : " << Box1.getVolume() << endl;

   // volume of box 2
   cout << "Volume of Box2 : " << Box2.getVolume() << endl;



return 0;


}


