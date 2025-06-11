#include <iostream>
#include <string>
#include <math.h>
using namespace std;
#define BASE 256
#define PRIME 101

int hashCalculate(string str, int start, int end){
	int p = 0;
	while(start <= end){
		p = ( BASE * p + int(str[start]) ) % PRIME ;
		start++;
	}
	return p;
}

bool checkPattern(string &str, string &pattern, int start, int end){
	for(int i = start,j = 0;i <= end;i ++,j++){
		if(str[i] != pattern[j]){
			return false;
		}
	}
	return true;
}

int searchPattern(string str, string pattern){
	int strLen = str.length();
	int patternLen = pattern.length();
	int patternHash = hashCalculate(pattern, 0, patternLen - 1);
	int ans = -1;
	int t = 0;
	int highOrder = 1;

	for(int i = 0; i < patternLen - 1;i++){
		highOrder = (highOrder*BASE) % PRIME;
	}

	for(int i = 0;i <= (strLen - patternLen);i ++){
		if(i == 0){
			t = hashCalculate(str, 0, patternLen - 1);
		}
		else{
			t = ( (t - (int(str[i - 1]) * highOrder ) % PRIME) 
				* BASE + int(str[i + patternLen - 1]) ) % PRIME; 
			if(t < 0){
				t += PRIME;
			}
		}

		if(t == patternHash 
			&& checkPattern(str, pattern, i, i + patternLen - 1)){
			return (i + 1);
		}
	}
	return -1;
}

int main(){
	string str = "hibirthboy";
	string pattern = "birth";
	cout << searchPattern(str, pattern) << endl; 
	return 0;
}