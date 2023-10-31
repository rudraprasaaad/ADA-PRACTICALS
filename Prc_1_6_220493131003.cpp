#include<iostream>
using namespace std;

int main(){
	int n, i, j, k; cin>>n;

	int sum[3], entry[2][2][2];

	int iBody = 0, jBody = 0, KBody = 0;
	for ( i=0 ; i<n ; i++ ){
		for( j=0 ; j<n ; j++){
			sum[i] += entry[i][j][0];	
			jBody++;		
		}
		iBody++;
	}

	cout<<"-------------ANALYSIS-------------"<<endl;
	cout<<"{for(i = 0; i < n; i++)} : "<< i + 1 << endl;
	cout<<"{for(j = 0; j < n; j++)} : "<< j + 1 << endl;

	for ( i=0 ; i<n ; i++ ){
		iBody = 0;
		for( k=0 ; k<n ; k++ ){
			sum[i] += entry[i][0][k];		
			KBody++;
		}
		iBody++;
	}
	cout<<"{for(k = 0; k < n; k++)} : "<< k + 1 << endl;

	cout<<"{sum[i] += entry[i][j][0];} : " << jBody << endl;
	cout<< "{for(j = 0; j < n; j++){sum[i][j] += entry[i][j][0];}} : " << iBody << endl;

	cout<<"{sum[i][j] += entry[i][0][k];} : " << KBody << endl;
	cout<<"for(j = 0; j < n; j++){for(k = 0; k < n; k++){sum[i] += entry[i][0][k]; : " << iBody << endl; 
	return 0;
}
