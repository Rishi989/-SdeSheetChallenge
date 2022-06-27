#include<bits/stdc++.h>
bool isThere(string &str,string &pat,int index){
    if(str.size()-index < pat.size() ){
        return false;
    }
    for(int i=index,j=0;j<pat.size();j++,i++){
        if(str[i] != pat[j]){
            return false;
        }
    }return true;
}


vector<int> stringMatch(string &str, string &pat) {
    vector<int> output;
    for(int i=0;i<str.size();i++){
        if(isThere(str,pat,i)){
            output.push_back(i);
        }
    }return output;
}
