                /// TASK 3
#include <bits/stdc++.h>
using namespace std;
int GetTheSecondLargestElement(int n , int max[])
    {
          sort(max,max+n);
        for(int i = n-1 ; i >= 0 ;i--)
        {
            if(max[i]!=max[i-1])
                return max[i-1] ;
        }
    }
int main()
{
    int n ;
    cout << "Please Enter The Size of Your Array : " <<endl;
    cin >> n ;
    int max[n];
    cout << "Please Enter The Elements Of Your Array :" <<endl;
     for(int i = 0 ; i < n ; i ++ )
          cin >> max[i];

    cout << GetTheSecondLargestElement(n,max);
}
