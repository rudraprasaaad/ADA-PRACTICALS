#include<iostream>
using namespace std;

int main(){
	int n, i=1; cin>>n;
	int c = 0;
	cout<<"-------------TRACING-------------"<<endl;
	cout<<"i"<<" "<<"i < n"<<" "<<"tot+=i"<<" "<<"i * 2"<<endl;
	while(i < n){
		int tot;
		tot += i;
		cout<<i<<" "<<i<<" < "<<n<<" "<<"true"<<"    "<<i * 2<<endl;
		i = i * 2;

		c++;
	}
	cout<<i<<" "<<i<<" < "<<n<<" "<<"false"<<"    "<<endl;

	cout<<endl;
	cout<<"-------------ANALYSIS-------------"<<endl;
	cout<<"{while(i < n} : " << c + 1 << endl;
	cout<<"{tot += i;} : " << c << endl;
	cout<<"{input size} : " << n <<endl;	

	return 0;
}