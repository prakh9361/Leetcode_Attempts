class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = needle.length();
        int n = haystack.length();

        for(int window = 0;window<=n-m;window++){
            for(int i=0;i <m;i++){
                if(needle[i]!= haystack[window+i]){
                    break;
                }
                if(i==m-1){return window;}
            }
        }
        return -1;
    }
};