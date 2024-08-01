class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        if (arr.empty()) return "";
        string ans = arr[0];
        for(auto s : arr) {
            string temp = "";
            for(int i = 0; i < min(ans.length(), s.length()); i++) {
                if(ans[i] == s[i]) 
                    temp.push_back(s[i]); 
                else 
                    break;
            }
            ans = temp; 
            if (ans.empty()) break;
        }
        return ans;
    }
};