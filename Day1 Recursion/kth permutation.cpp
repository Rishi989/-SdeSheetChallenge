// INTUTION BEHIND THE CODE
// it is based on how we used to calculate permutation in 11th class
// let n = 4 so are s = 1234
// 1 _ _ _ => starting with 1 there are 6 permutation;
// 2 _ _ _ => similarly here also 6;
// 3 _ _ _ => 6;
// 4 _ _ _ => 6;    that total's 24 permutation
// let our k = 21 
// so, it will be starting with 4 bec till 3 there are only 18 permutation 
// so, 4 if fixed; left = 1 2 3 
// 4 1 _ _ => for 2nd position starting with 1 have 2 permutaion;
// 4 2 _ _ => 2 permutation;
// since we want 21th permutation 4 1 _ _ have 20 permutation in total;
// 2nd position is for 2 ==     4 2 _ _ ;
// only 1 permutation is left for 21 so  4 2 3 1;
**********************************************************************************************



int factorial(int n){
    int fac =1;
    for(int i=1;i<n+1;i++){
        fac *= i;
    }return fac;
}

string kthPermutation(int n, int k) {
    k = k-1;
    string inital = "";   // it is the '1234' string according to n
    for(int i=0;i<n;i++){
        char a = '1'+i;
        inital += a;
    }
    int i = 1,index,x;
    string output = "";
    while(k != 0){
        x = factorial(n-i);
        index = k/x;
        output += inital[index];
        int size = inital.size();
        inital = inital.substr(0,index)+ inital.substr(index+1,n);
        k = k%x;
        i++;
    }output += inital;
    return output;
}
