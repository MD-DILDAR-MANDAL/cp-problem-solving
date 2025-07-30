#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class solution{
	public:
	long minimizeMaxParcelLoad(vector<int> &initialParcels,long &additionalParcels){
		int n = initialParcels.size();
		long long low = *max_element(initialParcels.begin(),initialParcels.end());
		long long high = low + additionalParcels;
		long long result = 0;

		while(low <= high){
			long long mid = low + (high - low)/2;
			long long temp = 0;

			for(auto  it : initialParcels){
				if(it < mid){
					temp += (mid - it);
				}
			}

			if(temp  >= additionalParcels){
				result = mid;
				high = mid - 1;
			}
			else{
				low = mid + 1;
			}
		}
		return result;
	}
};

int main(){
	vector<int>initialParcels = {4,3,5};
	long additionalParcels = 4;
	solution solve ;
	cout << solve.minimizeMaxParcelLoad(initialParcels, additionalParcels);
	return 0;
}