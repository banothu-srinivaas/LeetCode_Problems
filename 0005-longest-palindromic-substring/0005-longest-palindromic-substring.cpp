class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int start=0;
        int maxLen=0;
        for(int i=0;i<n;i++){
            // odd length
            int left=i,right=i;
            while(left>=0 && right <n && s[left]==s[right]){
                if(right-left+1>maxLen){
                    maxLen=right-left+1;
                    start=left;
                }
                left--;
                right++;
            }


            // odd length
            left=i;right=i+1;
            while(left>=0 && right<n && s[left]==s[right]){
                if(right-left+1>maxLen){
                    maxLen=right-left+1;
                    start=left;
                }
                
                left--;
                right++;
            }
        }
        return s.substr(start,maxLen);
    }
};