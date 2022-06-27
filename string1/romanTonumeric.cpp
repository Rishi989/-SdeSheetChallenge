#include <bits/stdc++.h>
int romanToInt(string s) {
    unordered_map<char,int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;
    
    int sum =0;
    int i=0;
    for(;i<s.size()-1;i++){
        if(roman[s[i]] < roman[s[i+1]]){
            sum -= roman[s[i]];
        }else{
            sum+= roman[s[i]];
        }
        
    }
    sum += roman[s[i]];
    return sum;
}
