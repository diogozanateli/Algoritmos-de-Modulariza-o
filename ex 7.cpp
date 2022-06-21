#include <iostream>
using namespace std;
void celsius (float n, string temp){
	if(temp=="FAHRENHEIT"){
		cout << ((n*1.8)+32) << " " << "o.F." << endl;
	}
	if(temp=="CELSIUS"){
		cout << (((n-32)*5)/9) << " " << "o.C." << endl;
	}
	if((temp!="CELSIUS") and (temp!="FAHRENHEIT")){
	cout << "ERRO" << endl;
}
}
int main(){
	float n;
	string temp;
	cin >> n >> temp;
		celsius(n, temp);
return 0;
}
