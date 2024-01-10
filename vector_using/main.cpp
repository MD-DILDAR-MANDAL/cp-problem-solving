//using vector data structure
#include <bits/stdc++.h>
using namespace std;

int main (){
  int n;
  cin >> n;
  vector < int >v;		//created  a data structure
  v.push_back(9);
  for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      v.push_back(x);		//inserting value in  v
    }
  for (int j = 0; j < v.size(); j++)
    {
      cout << v[j] << " ";
    }
  reverse (v.begin(), v.end());	//reverse the data string
  for (int k = 0; k < v.size(); k++)
    {
      cout << v[k] << " ";
    }
    //another way for using vector
    
    vector<int>b(n);
    for(int l=0;l<n;l++)
    {
        cin>>b[l];
    }
    cout<<"\n"<<"new data ";
     for(int m=0;m<n;m++)
    {
        cout<<b[m]<<" ";
    }
    
  return 0;
}