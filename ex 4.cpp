#include <iostream>
using namespace std;
string mes( int n){
   string m[12]={"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
		if(n<=12 and n>=1){
			return m[n-1];
		}
		else{
			return "erro";
		}
}

int main(){
	int n;
	cin >> n;
	cout << mes(n) << endl;
	return 0;	
}
