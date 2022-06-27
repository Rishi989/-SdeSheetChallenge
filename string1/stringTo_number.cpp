#include <bits/stdc++.h>
int atoi(string str) {
    string strNo = "";
    int end = '9'-0;
    int start = '0'-0;
    
    bool neg = false;
    if(str[0] == '-'){
        neg = true;
    }
    for(int i=0;i<str.size();i++){
        if(str[i]-0 >= start && str[i]-0 <=  end){
            strNo += str[i];
        }
    }
    int outNo =0;
    for(int i=0;i<strNo.size();i++){
        outNo = outNo*10 + (strNo[i]-'0');
    }
    if(neg){
        return -1*outNo;
    }return outNo;
