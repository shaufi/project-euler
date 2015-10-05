#include <iostream>
using namespace std;

int main() {
	int s=0;
	
	int a=1;
	int b=2;
	int c=0;
	while(b <= 4000000){
		c= a + b;
		if(b % 2 == 0)
		s+= b;
		a=b;
		b=c;
	}
	cout << s;
	// your code goes here
	return 0;
}
