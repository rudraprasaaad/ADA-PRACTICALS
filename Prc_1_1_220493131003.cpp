#include <iostream>
using namespace std;

void codingEx_1(int n)
{
	int bodyCount = 0;
	int i;

	cout << "-------------TRACING-------------" << endl;
	cout << "i"
		 << " "
		 << "i < n"
		 << " "
		 << "m+=i"
		 << " "
		 << "i++" << endl;

	for (i = 0; i < n; i++)
	{
		int j = 0;
		cout << i << " " << i << " < " << n << " "
			 << "true"
			 << " " << i + 1 << endl;
		int m;
		m += i;
		bodyCount++;
	}

	cout << i << " " << i << " < " << n << " "
		 << "false"
		 << " " << endl;
	cout << endl;
	cout << "-------------ANALYSIS-------------" << endl;
	cout << "{for(int i = 0; i < n; i++)} : " << i + 1 << endl;
	cout << "{int m += i;} : " << bodyCount << endl;
}

// void codingEx_2(int n){
// 	int sum[3];
// 	int entry[4][4];

// 	int i,j,innerLoopBody = 0,outerLoopBody = 0;
// 	for(i = 0; i < n; i++){
// 		for(j = 0; j < n; j++){
// 			sum[i] += entry[i][j];
// 			innerLoopBody++;
// 		}
// 		outerLoopBody++;
// 	}

// 	cout<<"-------------ANALYSIS-------------"<<endl;
// 	cout<<"{for(int i = 0; i < n; i++)} : "<<  i + 1 <<endl;
// 	cout<<"{ for(j = 0; j < n; j++){ sum[i] += entry[i][j];}	} : " << outerLoopBody << endl;
// 	cout<<"{for(j = 0; j < n; j++)} : "<<  j + 1 <<endl;
// 	cout<<"sum[i] += entry[i][j]; : " << innerLoopBody <<endl;

// 	// cout<<"Hello world ";
// }

int main()
{
	// int n = 5;
	// int sum[3];
	// int entry[4][4];

	// int i,j,innerLoopBody = 0,outerLoopBody = 0;
	// for(i = 0; i < n; i++){
	// 	for(j = 0; j < n; j++){
	// 		sum[i] += entry[i][j];
	// 		innerLoopBody++;
	// 	}
	// 	outerLoopBody++;
	// }

	// cout<<"-------------ANALYSIS-------------"<<endl;
	// cout<<"{for(int i = 0; i < n; i++)} : "<<  i + 1 <<endl;
	// cout<<"{ for(j = 0; j < n; j++){ sum[i] += entry[i][j];}	}" << outerLoopBody << endl;
	// cout<<"{for(j = 0; j < n; j++)} : "<<  j + 1 <<endl;
	// cout<<"sum[i] += entry[i][j]; : " << innerLoopBody <<endl;

	codingEx_1(5);
	return 0;
}