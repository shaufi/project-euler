#include <iostream>
using namespace std;

int main() {
	int s=0;
	for(int i = 0; i < 1000; i++){
		if(i % 3==0 || i % 5==0)
		s+=i;
	}
	cout << s;
	// your code goes here
	return 0;
}
