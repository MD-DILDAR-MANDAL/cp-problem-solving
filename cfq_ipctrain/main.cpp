#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n,d;
        cin >> n >> d;
        //storing values
        map <pair <int,int>,int> mp;
        for(int i = 0;i < n;i++)
        {
            int d1,t1,s1;
            cin >> d1 >> t1 >> s1;
            mp[{d1,t1}] = s1;
        }
        //max sadness consider it first to minimise sadness
        priority_queue <int> q;
        for(auto it : mp)
        {
            int x = it.second;
            q.push(x); 
        }
        //calculating sadness
        int sds = 0;
        while(n--){
            for(auto ti : mp)
            {
                int xt = q.top();
                pair <int,int> pit = ti.first;
                int pd1 = pit.first;
                int pt1 = pit.second;
                if(xt == ti.second)
                {
                    q.pop();
                    int day_hav = d - pd1 + 1;
                    int count = d;
                    if(day_hav > 0)
                    {
                        int day_wan = day_hav - pt1;
                        if(day_wan < 0) {
                            sds += abs(day_wan) * xt;
                            count = count - (pt1 - day_wan);
                        }else{
                            count = count - pt1;
                        }
                    }else 
                    if(day_hav == 0) sds += (pt1-1)*xt;
                    else
                    if(day_hav < 0){
                        sds += abs(abs(day_hav) + 1 - pt1) * xt;
                        }
                    
                    break;
                }
            }
        }
        cout <<'\n'<< sds;
    }
    return 0;
}