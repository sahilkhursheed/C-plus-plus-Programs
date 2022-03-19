#include<iostream>
using namespace std;

class Person{
        char name[50];
        int age;
        public:
        friend istream &operator>>(istream &abc, Person &y);
        friend ostream& operator<<(ostream &abc, Person y);
        Person operator++();
        Person operator++(int x);
};
istream &operator>>(istream &abc, Person &y){
        cout << "\nEnter Person's name ";
        gets(y.name);
        cout << "Enter Person's age ";
        abc >> y.age;
        return abc;
}

ostream& operator<<(ostream &abc, Person y){
        abc << "Name : " << y.name << ", age = " << y.age;
        return abc;
}

Person Person::operator++()
{
        age=age+5;
        return *this;   
}
Person Person::operator++(int x)
{
        Person y=*this;
        age=age+5;
        return y;
}

int main(){
        Person x;
        cin >> x;
        cout << "x = " << x;
        Person y=++x;
        cout<<"x= "<<x;
        cout<<"y= "<<y;
        Person z=x++;
        cout<<"x= "<<x;
        cout<<"z= "<<z;
        return 0;
}


