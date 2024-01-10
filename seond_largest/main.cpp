//to find second large in three numbers

#include <bits/stdc++.h> 
using namespace std;
int main() {
    int a , b ,c ;
    cin>>a>>b>>c;
    int lar=max({a,b,c});
    int seclar;
    if(a==lar) 
    {
        seclar=max(b,c);
    }
    else
    if(b==lar){
            seclar=max(a,c);
        }
        
    
    else 
        {seclar = max(a,b);
        }

	cout<<seclar;
	return 0;
}