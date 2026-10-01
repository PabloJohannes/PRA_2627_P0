#ifndef ROBOTICARM_H
#define ROBOTICARM_H

#include <iostream>

#using namespace std;

class RoboticArm {
	private:
		double x;
		double y;
		double z;
		bool grabbingObject;
	public:
		RoboticArm(double xt=0, double yt=0, double zt=0, bool gO=false);
		double getx();
		double gety();
		double getz();
		bool grabbingObj();
		void grab();
		void release();
		void move(double xt, double yt, double zt);


};

#endif
