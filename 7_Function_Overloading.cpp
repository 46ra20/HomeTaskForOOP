#include<bits/stdc++.h>
using namespace std;

class Function{
    public:
    int FunctionOverLoading(int n,int n2,int n3=0){
        if(n3!=0){
            return n+n2+n3;
        }
        return n+n2+n3;
    }
};

int main(){
    Function a;
    cout<<a.FunctionOverLoading(10,8)<<endl;
}