#include <bits/stdc++.h> 
using namespace std;
int main() {

    int n,m;
    cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	    
	}
	
	for(int k=0;k<n;k++){
	    m=a[k];
	    int count=0;
	while(m>0)
	{
	    int r=m%10;
	    m/=10;
	    if(r==4)
	    {
	        
	        count++;
	        }
	}
	cout<<"\n"<<count;
	    
	}

	return 0;
}