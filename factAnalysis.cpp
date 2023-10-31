#include<iostream>
using namespace std;

int main(){
	int fact = 1, n; cin>>n;


	if(n == 1 || n == 0){
		cout<<1;
	}
	else{
		for(int i = 1; i <= n; i++){
			fact *= i;
		}
		cout<<fact<<endl;	
	}
	return 0;
}