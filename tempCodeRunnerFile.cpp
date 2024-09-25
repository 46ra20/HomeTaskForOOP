#include<bits/stdc++.h>
using namespace std;

class Method{
    public:
    Method(){
    }
};
string ax(){
    return "I am from function";
    // return 0;
}

int main(){
    Method a = Method();
    a.value = ax();
    count<<a.value<<endl;
    cout<<"Hello"<<endl;
    return 0;
}