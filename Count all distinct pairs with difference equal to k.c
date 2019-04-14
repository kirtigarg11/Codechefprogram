Count all distinct pairs with difference equal to k

#include <iostream> 
#include <unordered_map> 
using namespace std; 
int main(){
  int n;
  cin>>n;
  int ar[n];
 unordered_map<int, int> umap; 
 for(int i=0;i<n;i++){
   cin>>ar[i];
   umap[ar[i]]++;
 }
int temp,flag=0,sum=4;
for(int i=0;i<n;i++){
   temp=sum+ar[i];
   
   if(umap[temp]>0){
   flag++;
   }
}
  cout<<flag;
}

timecomplexity id o(n)
