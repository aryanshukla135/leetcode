class Solution {
public:
    string removeStars(string s) {
         int n = s.length();
         string ans ="";
        
         for(int i =0 ; i< n ; i++){
            char ch = s[i];
            if(ch != '*'){
               ans.push_back(ch);
            }else{
               ans.pop_back();  
            }
         }
        
         return ans ;

    }
};