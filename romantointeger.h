class Solution {
public:
    int romanToInt(string s) {
        int idx[256] ;
        idx['I'] = 1 ; idx['V'] = 5 ; idx['X'] = 10 ; idx['L'] = 50 ; idx['C'] = 100 ; idx['D'] = 500 ; idx['M'] = 1000 ;
        int num = 0 ;
        char c ;
        for(int i = 0 ; i < s.length() ;i++) {
            if(i+1 >= s.length() )
            c = 'I' ;
            else
            c = s[i+1] ;
            if(idx[s[i]] >= idx[c]) 
            num = num + idx[s[i]] ;
            else
            num = num - idx[s[i]] ;
            
            
        }
        
        return num ;
    }
};
