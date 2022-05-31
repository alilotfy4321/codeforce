#include<bits/stdc++.h>
using namespace std;


bool isEnd=true;

int main(){
	
	int n,m;
	cin>>n>>m;
	
	
	for(int i=0 ;i<n ; i++){
		for(int j=0 ;j<n ; j++){
		if(i%2==0){
			cout<<"#";
		}else{
			if(isEnd){ //print in end
				if(j==m-1)
				{
				cout<<"#";
		    	}
				else
				{
				cout<<".";
				}
			}else{//print in first
				if(j==0)
				{
					cout<<"#";
				}
				else{
					cout<<".";
				}
				
			}
			if(j==m-1){//at end of loop change 
				isEnd=!isEnd;
			}
		}
		
	}
	
	cout<<"\n";
	}
	
	return 0;
}

