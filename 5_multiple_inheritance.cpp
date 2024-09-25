#include<bits/stdc++.h>
using namespace std;

class GrandParent{
    public:
    string grandParent;
    GrandParent(string grandParent){
        this->grandParent=grandParent;
        cout<<grandParent+" grand parent name"<<endl;

    }

};
class Parent{
    public:
    string parent;
    Parent(string parent){
        this->parent=parent;
        cout<<parent+" parent name"<<endl;
    }
};
class Child:public Parent,GrandParent{
    public:
    string name;
    Child(string name,string parent, string grandParent): GrandParent(grandParent),Parent(parent){
        this->name=name;
        cout<<name+" child name"<<endl;
    }
};

int main(){
    string name,parent,grandParent;
    name="rakib";
    parent="jamal";
    grandParent="abdur rahim";
    Child A(name,parent,grandParent);
    return 0;
}