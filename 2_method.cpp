#include<bits/stdc++.h>
using namespace std;

class Method{
    public:
    string value;
    Method(){
    }
};
string ax(){
    return "I am from function";
    // return 0;
}

int main(){
    Method a;
    a.value = ax(); //it's work but we need to declure a variable in the class
    cout<<a.value<<endl;
    cout<<"Hello"<<endl;
    return 0;
}


