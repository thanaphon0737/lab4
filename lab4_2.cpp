#include <iostream>
#include <cmath>
using namespace std;
double findDistance(double u, double a, double t){
	double s;
	s = u*t+0.5*a*t*t;
	return s;
}
int main(){

	cout << "test case1: s = "<< findDistance(0, 0.5, 1)<<endl;
	cout << "test case2: s = "<< findDistance(1.5, -1, 2)<<endl;
	cout << "test case3: s = "<< findDistance(5, 4, 3)<<endl;
	
}
