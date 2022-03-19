#include<iostream>
using namespace std;

class Person{
        char name[50];
        int age;
        public:
        friend istream &operator>>(istream &r, Person &x){
                cout << "\nEnter name ";
                //fflush(stdin);
                cin.ignore();
                gets(x.name);
                cout << "\nEnter age ";
                r >> x.age;
                return r;
        }
        friend ostream &operator<<(ostream &r, Person x){
                r << "(" <<x.name <<", "<<x.age <<")";
                return r;
        }
        bool operator>(Person p2){
                if(age > p2.age)
                   return true;
                else
                   return false;
        }
};


template <class T>
T max(T a, T b){
        if(a < b)
           return b;
        else
           return a;
}



int main(){
        int x, y;
        cout << "\nEnter two integers ";
        cin >> x >> y;
        cout <<"\nmax=" <<max(x, y);
        float a, b;
        cout << "\nEnter two real numbers ";
        cin >> a >> b;
        cout <<"\nmax=" <<max(a, b);
        char p, q;
        cout << "\nEnter two characters ";
        cin >> p >> q;
        cout <<"\nMax="<<max(p, q);
        Person p1, p2;
        cout <<"\nEnter records of two persons ";
        cin >> p1 >> p2;
        cout << "\nMax=" <<max(p1, p2);
        return 0;
}

