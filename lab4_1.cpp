#include <iostream>
#include <cmath>
using namespace std;
double equlator(int x){
	double y;
	return y = (3*pow(x,3))+(2*2.71828)+(pow(2,2*x+1))+(sqrt(pow(x,2)+1));
}
int main(){
	double i;
	cout << "Enter x = ";
	cin >> i;
	cout << "Result = " << equlator(i);
	
}
