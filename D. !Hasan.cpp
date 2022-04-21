#include<bits/stdc++.h>
using namespace std;
 
int n,x,y;
 
int main(){
	
	 long long left=1,right=1e18,mid=0,ans=-1,check=0;
	
	cin>>n>>x>>y;
	
	while(left<=right){
		
		mid=(right+left)/2;
		
		 check=(mid/x)+(mid/y);
		
		if(check>=n){
			ans=mid;
			right=mid-1;
		}
		else{
			left=mid+1;
		}
 
	}
	
	cout<<ans<<"\n";
	
	return 0;
}
