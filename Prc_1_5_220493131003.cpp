#include<iostream>
using namespace std;

int main(){
	int n, i, j, k; cin>>n;

	int iBody=0, jBody=0, KBody=0;
	int sum[5][5];
	int entry[2][2][2];

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			for(k = 0; k < n; k++){
				sum[i][j] += entry[i][j][k];
				KBody++;
			}
			jBody++;
		}
		iBody++;
	}

	cout<<"-------------ANALYSIS-------------"<<endl;
	cout<<"{for(i = 0; i < n; i++)} : "<< i + 1 << endl;
	cout<<"{for(j = 0; j < n; j++)} : "<< j + 1 << endl;
	cout<<"{for(k = 0; k < n; k++)} : "<< k + 1 << endl;

	cout<<"{sum[i][j] += entry[i][j][k];} : " << KBody << endl;
	cout<< "{for(k = 0; k < n; k++){sum[i][j] += entry[i][j][k];}} : " << jBody << endl;

	cout<<"for(j = 0; j < n; j++){for(k = 0; k < n; k++){sum[i][j] += entry[i][j][k]; : " << iBody << endl; 
	return 0;
}