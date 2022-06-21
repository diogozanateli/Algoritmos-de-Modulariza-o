#include <iostream>
using namespace std;

int teste(int a, int b){
  if(((a==0)and(b==1)) or ((a==1)and(b==0))){
  	cout << "True" << endl;
  }
   else{
   	cout << "False" << endl;;
   }
	
}

int main (){
	int a, b;
	cin >> a >> b;
	
	teste(a,b);
		
	return 0;
}
