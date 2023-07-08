

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{   //length is even
    
   vector<int> arr={1,4,3,2,6,8,4,6};
   sort(arr.begin(),arr.end());
   int n=arr.size();
   int sum=0;
   int mi=0;
   for(int i=0;i<n-1;i+=2){
       mi=min(arr[i],arr[i+1]);
       sum+=mi;
     
   }
   cout<<sum;
   
   
   
   
    return 0;
}
