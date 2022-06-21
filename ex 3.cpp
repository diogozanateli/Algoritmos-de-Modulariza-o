#include <iostream>
using namespace std;

float media(float a, float b){
	float med;
	med=((a+b)/2);
	return med;
}

int main(){
	float a, b;
	cin >> a >> b;
	cout << media(a,b) << endl;
	return 0;
}
