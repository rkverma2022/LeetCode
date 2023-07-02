#include<iostream>
using namespace std;

//method -2 

int main()
{
    int x;
    cin>>x;
    int temp = x;
    int num_zeros = 1;
    while (temp>9)
    {
        temp = temp/10;
        num_zeros *=10;
    }
    cout<<num_zeros<<endl;
    
    for(num_zeros; num_zeros>1;num_zeros=num_zeros/100)
    {
        if(x/num_zeros!= x%10)
        {
        
            cout<<false;
            return 0;
        }
        
        x = x%num_zeros;
        x = x/10;
        
    }
    cout<<true;

    return 0;

}


//method - 1
// int main()
// {
//     int x;
//     cin>>x;
//     string y = to_string(x);
//     int n = y.length();
//     for(int i =0;i<n/2;i++)
//     {
//         if(y[i] !=y[n-i-1])
//         {
//             cout<<false;
//             return 0;
            
//         }
//     }
//     cout<<true;
//     return 0;
// }



//In C

// bool isPalindrome(int x){
//     if(x<0)
//         return false;
//     int temp = x;
//     int num_zeros = 1;
//     while (temp>9)
//     {
//         temp = temp/10;
//         num_zeros *=10;
//     }
    
    
//     for(num_zeros; num_zeros>1;num_zeros=num_zeros/100)
//     {
//         if(x/num_zeros!= x%10)
//         {
        
            
//             return false;
//         }
        
//         x = x%num_zeros;
//         x = x/10;
        
//     }
    

//     return true;
// }