''#include <iostream>
using namespace std;

int abaixo(float n){
	return n;
}
int acima(float n){
	int inteiro=n;
	if((n-inteiro)==0){
		return n;
	}
	else{
		return (inteiro+1);
	}
}
int conv(float n){
	int inteiro=n;
	if((n-inteiro)>=0.5){
		return (inteiro+1);
	}
	else{
		return inteiro;
	}
}

int main(){
	float n;
	cin >> n;
	
	cout << abaixo(n) << endl;
	cout << acima(n) << endl;
	cout << conv(n) << endl;
	
	return 0;
}
