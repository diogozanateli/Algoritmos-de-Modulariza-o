#include <iostream>
using namespace std;

int soma(int a, int b){
	int s;
	s=a+b;
	return s;
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << soma(a,b) << endl;
	return 0;
}
