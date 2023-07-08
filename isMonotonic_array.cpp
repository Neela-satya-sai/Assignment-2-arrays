

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
bool ismonotonic(vector<int> arr){
    int n=arr.size();
    if(n==0) return false;
    if(n==1 or n==2) return true;
    bool flag=0;
    for(int i=0;i<n-1;i++){
       if(arr[i]<=arr[i+1]){  //monotonic increasing
           flag=1;
       } 
       else{
         if(flag==1){
           return false;   
         }  
       }
    }
    return true;
}

int main()
{  //tell if the array is monotonic or not
   vector<int> arr={1,5,4,5,6};
   cout<<ismonotonic(arr);
    return 0;
}
