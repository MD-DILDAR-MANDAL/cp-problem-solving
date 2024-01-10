//The lead game
#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector <int>S;
	vector <int>T;
	int p1 ,p2;
	for(int i = 0;i < N;i++){
	    cin >> p1 >> p2;
	    S.push_back(p1);
	    T.push_back(p2);
	    
	}
	int sum1 = 0;
	int sum2 = 0;
	vector <int> l1;
	vector <int> l2;
	int x;
		for(int j = 0;j < N;j++){
	    sum1 += S[j];
	    sum2 += T[j];
	    if(sum1 > sum2)
	    x = 1;
	    else 
	    x = 2;
	    l1.push_back(x);
	    if(sum1 > sum2)
	    l2.push_back(sum1 - sum2);
	    else
	    l2.push_back(sum2 - sum1);
	}
	int maxnum = l2[0];
	for(int k = 1;k <= N-1;k++ ){
	    maxnum = max(maxnum ,l2[k]);
	}
	int index;
	for(int l = 0;l < N;l++){
	if ( maxnum == l2[l]){
	index = l;
	break;
	}
	}
	cout << l1[index] <<" "<<l2[index];
	return 0;
}
