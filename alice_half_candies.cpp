

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{   //alice has n candies, alice to have only n/2 candies,
//so maximize the candies that aloce can have
    //n is even
   vector<int> arr={1,1,2,3,4,8,7,9,23,56};
   sort(arr.begin(),arr.end());
   int n=arr.size();
   int eat=1;     //eat<=n/2;
   
   for(int i=0;i<n-1;i++){
       if(arr[i]!=arr[i+1]){
           eat++;
           if(eat==n/2) break;
       } 
       
    }
    cout<<eat<<endl;
   
   
   
   
   
    return 0;
}
