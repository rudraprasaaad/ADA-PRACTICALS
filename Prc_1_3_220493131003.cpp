#include<iostream>
using namespace std;

int main(){
	int i , j, n, innerBodyCount = 0, outerBodyCount = 0; cin>>n;

	for(i = 0; i < n; i++){
		for(j = 0; j < i; j++){
			int m;
			m += j;
			innerBodyCount++;
		}
		outerBodyCount++;
	}

	cout<<"-------------ANALYSIS-------------"<<endl;
	cout<<"{for(int i = 0; i < n; i++)} : "<<  i + 1 <<endl;
	cout<<"{for(int i = 0; i < {for(j = 0; j  n; i++)} : "<<  j + 1 <<endl;
	cout<<"{int m += i;} : " << innerBodyCount <<endl;
	cout<<" {for(j = 0; j < i; j++){ m += j;innerBodyCount++;}} : " << outerBodyCount <<endl;
	return 0;
}

// -------------ANALYSIS-------------
// {for(int i = 0; i < n; i++)} : 6
// {for(int i = 0; i < n; i++)} : 5
// {int m += i;} : 10
//  {for(j = 0; j < i; j++){ m += j;innerBodyCount++;}} : 5
