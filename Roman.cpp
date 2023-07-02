#include<bits/stdc++.h>
#include <map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
      map<char, int> repre = {{'I', 1},{'V', 5}, {'X', 10}, {'L', 50},{'C', 100},{'D',500}, {'M', 1000}};
      char symbol[] = {'I', 'V', 'X', 'L', 'D', 'M'};
      int n = s.length();
      int result = 0;
      int i =0;
      for( i; i<n-1; i++)
      {
        
        if(repre[s[i]] < repre[s[i+1]])
        {
          result -= repre[s[i]];
          
        }
        else{
          result += repre[s[i]];
        }
        
        
      }
      result += repre[s[i]];
      
      return result;
    }
};
int main()
{
    string s = "CDXV";

    Solution obj;
    int a = obj.romanToInt(s);
    cout<<a;

    return 0;
}
