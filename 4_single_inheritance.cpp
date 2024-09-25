#include<bits/stdc++.h>
using namespace std;

class SingleINheritance{
    public:
    string name;
    SingleINheritance(string name){
        this->name=name;
        cout<<name<<endl;
    }
};

class ChildClass: public SingleINheritance{
    public:
    int value,value2;
    ChildClass(string name,int value,int value2):SingleINheritance(name){
        cout<<"Parent called by the children"<<endl;
        this->value=value;
        this->value2=value2;
    }

    // ChildClass()
    void Wow(){
        cout<<"Wow this is child function"<<endl;
    }
};

int main(){
    string name = "I am rakib";
    ChildClass A(name,10,1);

    A.Wow();

    return 0;
}