#include <iostream>
using namespace std;

int main() {
    int t1 = 0, t2 = 1, nextTerm = 0, n;
    cin >> n;

    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

    int fibCount = 0;
    while(nextTerm <= n) {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
		fibCount++;   
    }
    cout<<endl<<"-------------ANALYSIS-------------"<<endl;
    cout<<"{ t1 = t2; t2 = nextTerm; nextTerm = t1 + t2;} : " << fibCount << endl;
    return 0;
}