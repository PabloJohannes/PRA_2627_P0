#include "RoboticArm.h"
#include <iostream>
using namespace std;

int main(void) {

	RoboticArm b1(0,0,0,false);
	
	cout << "mover a (2,2,0)" << endl;
	b1.move(2,2,0);

	cout << "cojer objeto" << endl;
	b1.grab();
	
	cout << "coordenadas: " << b1.getx << ";" << b1.gety << ";" << b1.gety << endl;
	cout << "Cojiendo Objeto? ";
	if(b1.grabbingObj){
		cout << "si";
	} else {
		cout << "no";
	}
	cout << endl << endl;

	reuturn 0;
}
