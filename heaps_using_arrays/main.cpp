#include <bits/stdc++.h>
using namespace std;

void delete_(vector <int> &v,int &i){
    swap(v[1],v[i]);
    i--;
    int temp = 1;
    while(temp*2 <= i && (temp*2+1 <= i)){
            if(v[temp*2] > v[temp*2+1]&&v[temp*2] > v[temp]){
                swap(v[temp*2],v[temp]);
                temp *= 2;
                }
            else
            if(v[temp*2] < v[temp*2 + 1] && v[temp*2 + 1] > v[temp]){
                swap(v[temp * 2 + 1],v[temp]); 
                temp *= 2;
                }
            else{
                break;
            }
        }
}
void insert_(vector <int> &v,int &i,int val){
    i++;
    v[i] = val;;
    int temp = i;
    while( i / 2 > 0 && v[i / 2] < v[i]){
        swap(v[temp],v[temp/2]);
        temp /= 2;
        }
    }
int main(){
    vector <int> v(5);
    int i = 0;
    insert_(v,i,9);
    insert_(v,i,10);
    insert_(v,i,40);
    insert_(v,i,13);
    for(auto it:v) cout<< " " << it;
    delete_(v,i);
    cout<<'\n'<< v[1] << '\n';
    for(auto it:v) cout<< " " << it;
    return 0;
}
