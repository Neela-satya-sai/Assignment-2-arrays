

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{  //find three numbers product whos product is maximum
   vector<int> arr={3,6,1,2,4,3,2};
   int n=arr.size();
   int max1=INT_MIN;
   int max2=INT_MIN;
   int max3=INT_MIN;
   for(int i=0;i<n;i++){
       if(arr[i]>max1){
           max3=max2;
           max2=max1;
           max1=arr[i];
       }
       else if(arr[i]>max2 && arr[i]<max1){
           max3=max2;
           max2=arr[i];
       }
       else if(arr[i]>max3 && arr[i]<max2){
           max3=arr[i];
       }
   }
   cout<<max1*max2*max3<<endl;
   
    return 0;
}
