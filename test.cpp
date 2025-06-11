#include <iostream>
#include <string>
using namespace std;

int main(){
	string pattern = "ababd";
	int i = 1;
	int len = 0;
	int m = pattern.length();
	int lps[m];
	lps[0] = 0;

	while(i < m){
		if(pattern[len] == pattern[i]){
			len ++;
			lps[i] = len;
			i++;
		}
		else{
			if(len == 0){
				lps[i] = 0;
				i++;
			}
			else{
				len = lps[len - 1];
			}
		}
	}
	for(auto it: lps){
		cout << it << ", ";
	}
	return 0;
}