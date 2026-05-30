class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
         int n = pushed.size();
         stack<int> st ;
         int i =0;
         int j =0;
         while(i<n && j< n ){
            if(!st.empty() && st.top()==popped[j]){
                st.pop();
                j++;
            }else{
                st.push(pushed[i]);
                i++;
            }
         }
         while(j<n){
            if(st.top()==popped[j]){
                st.pop();
                j++;
            }else{
                return false;
            }
         }
         
         return true;

    }
};