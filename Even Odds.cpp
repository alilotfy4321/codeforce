#include<bits/stdc++.h>
using namespace std;


int main(){
	long long n , index;
	cin>>n>>index;
     if(n%2==0){
     	if(index>n/2){
     		cout<<(index-(n/2))*2;
		 }else{
		 	cout<<index*2-1;
		 }
	 }	else{
	 	if(index>(n/2)+1){
     		cout<<(index-((n/2)+1))*2;
		 }else{
		 	cout<<index*2-1;
		 }
	 }
	return 0;
}
