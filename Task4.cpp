#include<bits/stdc++.h>
using namespace std;
 char FirstNonRepeatingCharacter(string str)
    {
        int Alphabets[26]={0};
        int index1,index2;
        for(int i = 0 ; i < str.size() ; i++ )
        {
            index1 = str[i]-'a' ;
            Alphabets[index1]++;
        }
        for(int i = 0 ; i < 26 ; i++ )
        {
          index2 = str[i]-'a';
          if(Alphabets[index2]==1)
           return char(index2 + 'a') ;
        }
        return -1 ;
    }
int main()
{
   string s ;
   cin >> s ;
   cout << FirstNonRepeatingCharacter(s);
}
