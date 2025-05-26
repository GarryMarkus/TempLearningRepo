#include<bits/stdc++.h>
using namespace std;

struct student{
    string name;
    int age;
    float marks;
};

int main(){
    struct student s1;
    s1.name = "John";
    s1.age = 20;
    s1.marks = 90.5;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"Marks: "<<s1.marks<<endl;
    return 0;
}