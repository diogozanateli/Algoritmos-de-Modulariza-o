#include <iostream>
using namespace std;

float maximo (float a, float b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

int main(){
    float a,b;	
	cin >> a >> b;
	cout << maximo(a,b) << endl;		
	return 0;
}
