//     1
//    1 1          //i=2  and j=2 coeff = 1 ------ coeff = coeff*(i-j+1)/j
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int coeff = 1;

    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k <= n-i; k++)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
            {
                coeff = 1;
            }
            else{
                coeff = coeff*(i-j+1)/j;
            }
            cout<<coeff<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}