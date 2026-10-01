#include "RoboticArm.h"
#include <iostream>
using namespace std;

RoboticArm::RoboticArm(double xt=0, double yt=0, double zt=0, bool gO=false) : x(xt), y(yt), z(zt), grabbingObject(gO) {}

double RoboticArm::getx() { return x; }
double RoboticArm::gety() { return y; }
double RoboticArm::getz() { return z; }
bool RoboticArm::grabbingObj() { return grabbingObject; }
void RoboticArm::grab() { grabbingObject = true; }
void RoboticArm::release() { grabbingObject = false; }
void RoboticArm::move(double xt, double yt, double zt) {
	x = xt;
	y = yt;
	z = zt;
}

