#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        string a;
        int n= 12222;
        for( auto a : strs)
        {
            if(n>a.length())
                n = a.length();
        }
        

        for(int i =0; i<n;i++)
        {
            char A = strs[0][i];
            for(auto a: strs)
            {
                if(A!=a[i])
                    return result;
            }
            result += A;
        }

        return result;
    }
};

int main()
{
   vector<string> strs = {""};
   Solution obj;
   cout<<obj.longestCommonPrefix(strs);

   return 0;
}