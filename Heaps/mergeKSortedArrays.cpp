//https://www.geeksforgeeks.org/problems/merge-k-sorted-arrays/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=merge-k-sorted-arrays
class Solution{
    public:
    vector<int> mergeKArrays(vector<vector<int>> arr, int K){
        priority_queue< pair< int, pair<int,int> >,
                        vector< pair< int, pair<int,int> > >, 
                        greater< pair< int, pair<int,int> > > >min_heap;
        int len = arr.size();
        vector <int> ans;
        
        for(int i = 0; i < len; i++){
            min_heap.push( {arr[i][0], {i,0}} );
        }
        
        while(!min_heap.empty()){
            auto top = min_heap.top();
            int i = top.second.first;
            int j = top.second.second;
            min_heap.pop();
            ans.push_back(top.first);
            if(arr[i].size() > j + 1){
                min_heap.push( {arr[i][j + 1], {i, j + 1}} );
            }
        }
        return ans;
    }
};
