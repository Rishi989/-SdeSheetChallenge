#include <bits/stdc++.h>
string reverseString(string str)
{
    stack<string> output;
    string s ="";
    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            output.push(s);
            s ="";
        }else{
            s+= str[i];
        }
        
    }
    if(s!= ""){
        output.push(s);
    }
    
    int i = output.size()-1;
//     cout << "size of output "<<i+1<<endl;
    string outStr = "";
    while(!output.empty()){
        outStr += output.top();
//         cout<<"vector "<<output.top()<<endl;
        if(output.top()!=""){
        outStr += ' ';
        }
        output.pop();
    }return outStr;
    
}
