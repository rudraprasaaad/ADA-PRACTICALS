#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}

	int ifCount = 0, forCount=0;
	int max = a[0];
	int i;
	for(i = 0; i < n; i++){
		if(a[i] > max){
			max = a[i];
			ifCount++;
		}
		forCount++;
	}
	cout<<"Maximum is: "<<max<<endl;

	cout<<"-------------ANALYSIS-------------"<<endl;
	cout<<"{for(int i = 0; i < n; i++)} : "<< i + 1 << endl;
	cout<<"{if(a[i] > max){max = a[i];}} : " << forCount << endl;
	cout<<"{max = a[i];} : " << ifCount << endl;

	return 0;
}