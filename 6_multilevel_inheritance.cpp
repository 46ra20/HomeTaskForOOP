#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void Hello(){
        cout<<"Hellow"<<endl;
    }
};

class B:public A{
    public:
    void Oh(){
        cout<<"Oh"<<endl;
    }
};

class C:public B{
    public:
    void NO(){
        cout<<"NO"<<endl;
    }
};

int main(){
    C abc;
    abc.Hello();
    abc.Oh();
    abc.NO();
}