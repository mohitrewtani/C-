#include<bits/stdc++.h>
using namespace std;

class Student {
    char* p;
    int val;
    public:
     Student(char* p1 = NULL, int val1 = 0 ):p{p1} ,val{val1}{
        cout  << "Constructor Called" << endl;
        int length = sizeof(p1)/sizeof(char);
        p = new char[length];
        p = p1;
        //cout << p << endl;
        val = val1;
    }
    Student(Student &obj){
        cout  << "Copy Constructor Called" << endl;
        p = obj.p;
        val = obj.val; 
    }
    ~Student(){
        cout  << "Destructor Called" << endl;
        delete p;
    }
    void print(){
        cout << "val is : " << val <<endl;
        cout << "name is : " << p << endl;
    }
    Student operator + ( Student const &obj1){
        cout<<"Operator overloading +"<<endl;
        
        //char* st = new char[strlen(p)+strlen(obj1.p)+1];
        char *st;
        int v = val + obj1.val;
        strcpy(st, p);
        cout << st  << " st " << endl;
        strcat(st, obj1.p);
        cout << st  << " st2 " << endl;
        Student res(st,v);
        return res;
    }
    void operator = ( Student const &obj1){
        cout<<"Operator overloading ="<<endl;
        p = obj1.p;
        val = obj1.val;
    }
};
int main(){
    Student b("mohit",8);
    b.print();
    Student m = b;
    m.print();
    Student c("naveen",10);
    Student d;
    d = c;
    d.print();
    Student E;
    E = b + c;
    E.print();
}