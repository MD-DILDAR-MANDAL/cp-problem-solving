//https://www.naukri.com/code360/problems/aggressive-cows_1082559?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=PROBLEM

/*Optimal */
//just add binary search rest code is same as brute force
int aggressiveCows(vector<int> &stalls, int k){
	sort(stalls.begin(),stalls.end());
    int min_ele = stalls[0];
	int max_ele = *max_element(stalls.begin(),stalls.end());
	int range = max_ele - min_ele;
	int ans = 1;
    int low = 1;
    int high = range;

    while(low<=high){
        int mid=low+(high-low)/2;
        int positionSet = 1;
		int diff = max_ele+1;
		int prev = stalls[0];

		for(int j = 1;j < stalls.size();j ++){
			int tmp = stalls[j] - prev;
			if( tmp >= mid){
                ++positionSet;
				diff = min(diff, tmp);
				prev = stalls[j];
            }
			if(positionSet == k)break;
		}
		if(positionSet == k){
			ans = max(diff,ans);
            low = mid+1;
		}
        else high=mid-1;
    }
	return ans;
}

/*___Brute Force*___/
/*
#include <bits/stdc++.h>
using namespace std;

int solution(vector <int>&v,int n,int k){
	int min_ele = v[0];
	int max_ele = *max_element(v.begin(),v.end());
	int range = max_ele - min_ele;
	int ans = 1;
    for(int i = 1;i <= range;i ++){
        int positionSet = 1;
		int diff = INT_MAX;
		int prev = v[0];

		for(int j = 1;j < v.size();j ++){
			int tmp = v[j] - prev;
			if( tmp >= i){
                ++positionSet;
				diff = min(diff, tmp);
				prev = v[j];
            }
			if(positionSet == k)break;
		}
		if(positionSet == k){
			ans = max(diff,ans);
		}
		else break;
    }
	return ans;
}

int main() {
	int t;
	cin >> t ;
	while(t--){
		vector <int> v;
		int n, c, x;
		cin >> n >> c;
		for(int i = 0;i < n ;i ++){
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());

		cout << solution(v,n,c) << "\n";
	}
	return 0;
}

*/