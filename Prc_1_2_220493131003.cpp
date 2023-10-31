#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int sum[3];
    int entry[4][4];

    int i, j, innerLoopBody = 0, outerLoopBody = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i] += entry[i][j];
            innerLoopBody++;
        }
        outerLoopBody++;
    }

    cout << "-------------ANALYSIS-------------" << endl;
    cout << "{for(int i = 0; i < n; i++)} : " << i + 1 << endl;
    cout << "{ for(j = 0; j < n; j++){ sum[i] += entry[i][j];}	}" << outerLoopBody << endl;
    cout << "{for(j = 0; j < n; j++)} : " << j + 1 << endl;
    cout << "sum[i] += entry[i][j]; : " << innerLoopBody << endl;

    return 0;
}
