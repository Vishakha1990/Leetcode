/*Given a list of non negative integers, arrange them such that they form the largest number.

For example, given [3, 30, 34, 5, 9], the largest formed number is 9534330.*/


class Solution {
public:
    
    bool static mycompare(string a , string b) {
        return a+b > b+a ; 
    }
    
    string largestNumber(vector<int>& nums) {
        string res = "";
        vector<string> nums2string ;
        for(int i = 0 ; i< nums.size() ; i++) {
            nums2string.push_back(to_string(nums[i])) ;
        }
        sort(nums2string.begin(),nums2string.end(), mycompare) ;
        
        for(int i = 0 ; i < nums2string.size() ; i++) {
            res = res + nums2string[i] ;
        }
        if (res[0] == '0')
            return "0" ;
            else
            return res ;
    }
};


