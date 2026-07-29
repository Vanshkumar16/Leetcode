class Solution {
public:
    int myAtoi(string s) {
        // string result="";
        long long n=s.size();
        int i=0;
        while(i<n && s[i]==' '){
            i++;
        }
        int sign=1;
        if(i<n && (s[i]=='-' || s[i]=='+')){
            if(s[i]=='-'){
                sign=-1;
            }
            i++;
        }
        long long result=0;
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            
            result = result * 10 + digit;
            
            // // Check for 32-bit overflow / underflow
            if (sign * result >= INT_MAX) {
                return INT_MAX;
            }
            if (sign * result <= INT_MIN) {
                return INT_MIN;
            }
            
            i++;
        }
        return sign*result;
        // for(int i=0;i<n;i++){
        //     if(s[i]==" "){
        //         continue;
        //     }
        //     else if(s[i]=='-' || s[i]=='+'){
        //         result.push_back(s[i]);
        //     }
        //     else if()
        // }
        
    }
};