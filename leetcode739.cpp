class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;
        st.push(-1);
        for (int i = n - 1; i >= 0; i--) {
            int val = nums[i];

            while (st.top() != -1 && nums[st.top()] <= val) {
                st.pop();
            }
            int idx = st.top();
            if (idx != -1) {
                int wait = idx - i;
                ans[i] = wait;
            } else {
                ans[i] = 0;
            }
            st.push(i);
        }
        return ans;
    }
};