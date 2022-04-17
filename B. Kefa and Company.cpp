#include<bits/stdc++.h>
using namespace std;

long long cs[1000001];
int main(){
	int n,d;
	cin>>n>>d;
	vector<pair<int,int>> v;
	for(int i=0 ; i<n ; i++){
		int x,y;
		scanf("%d%d",&x,&y);
		v.push_back(make_pair(x,y));
	}
	
	sort(v.begin(),v.end());
	
	//cumulative sum;
	
	for(int i=0 ; i<n ; i++){
		cs[i]=v[i].second;
		if(i) cs[i]+=cs[i-1];
	}
	
	long long ans=0;
	for(int i=0 ; i<n ; i++){
		
		    int r=lower_bound(v.begin(),v.end(),make_pair(v[i].first+d,-1))-v.begin()-1;
		     long long current=cs[r];
		     if(i) current-=cs[i-1];
		     ans=max(ans,current);
		
		}
	
	cout<<ans;
	
	return 0;
}
