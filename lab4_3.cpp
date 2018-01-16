#include <iostream>
using namespace std;
int findDivisor(int x){
	int i=2;
	while(x>1){
		if(x%i==0){
			return i;
		}
		i++;
	}
}
int main(){
	cout <<"test case1 = "<<findDivisor(10)<<endl;
	cout <<"test case2 = "<<findDivisor(97)<<endl;
	cout <<"test case3 = "<<findDivisor(221)<<endl;
	return 0;
}
