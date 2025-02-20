//https://www.geeksforgeeks.org/problems/sort-a-stack/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=sort-a-stack

/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

void findInsert(int a, stack <int>&s){
    if(s.empty() == true || a >= s.top()){
        s.push(a);
    }
    else{
        int b = s.top();
        s.pop();
        findInsert(a,s);
        s.push(b);
    }
}

void SortedStack :: sort(){
    
    int a = s.top();
    if(!s.empty()){
        a = s.top();
        s.pop();
        sort();
        findInsert(a,s);
    }  
}
/*
1. we have done more like divide in the sort function keeping top value and passing the remaining stack along with the value then conquer in the findInsert function. 
2. Next we will find the correct position and insert the element but as we need greater element top so that we get a non increasing order we will check.
3. if greater element is in the stack then we recursively arrange the stack using the findInsert function.
*/