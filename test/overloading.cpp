#include <bits/stdc++.h>
using namespace std;
class rectangle {
    int length;
    int breadth;
    public:
    rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    ~rectangle(){
        cout<<"Destructor called "<<endl;
    }
};
class overload{
    public: 
    int n;
    overload(int a){
        n =a;
    }
    overload operator++(){ // for post fix use int operator++(int){}
    ++n;
    return n;
    }
    overload operator++(int){
        return n++;
    }
};
class com{
    public:
    int r;
    int i;
    com(int r, int i){
        this->r=r;
        this->i=i;
    }
    com(){
    }

    // overloading
    com operator-(com  obj){
        com temp;
        temp.r= r-obj.r;
        temp.i = i-obj.i;
        return temp;
    }
};

// implementation using friend function
// com overload(com obj1, com obj2){
//     com temp;
//     temp.i = obj1.i-obj2.i;
//     temp.r = obj1.r-obj2.r;
//     return temp;
// }

class str{
    public:
    string s = "OOP";
    
    str(string s){
        this->s = s;
    }
    str(){}

    // overloading of+
    str operator+(str obj){
        str temp;
        temp.s = s.append(obj.s);
        return temp;
    }

    // overloading of =
    str operator=(str obj){
        str temp;
        temp.s = s;
        return temp;
    }

    // overloading of == for comparison
    bool operator==(str obj){
        if(s.compare(obj.s)){
            return true;
        }
        else{
            return false;
        }
    }

    // length
    void length (){
        cout<<s.size()<<endl;
    }
    void low(){
        for(int i=0;i!='\0';i++){
        s22[i]= tolower(s[i]);
    }
    void up(){
        cout<<toupper(s)<<endl;
    }

}
};
int main(){
    rectangle r1(10,20);
    overload o1(10);
    overload o5(10);
    overload o2 = ++o1;
    cout<<"prefix overloading"<<endl;
    cout<< o2.n<<endl;
    cout<<"postfix overloading"<<endl;
    overload o3 = o5++;
    cout<<o3.n<<endl;
    com c1(15,15);
    com c2(13,13);
    com c3;
    c3 = c1-c2;
    cout<<"The real and imaginary part after subtraction is: "<<c3.r<<" "<<c3.i<<endl;
    str s1("Ujjwal"),s2("Sharma"),s3;
    s3= s1+s2;
    cout<<s3.s<<endl;
    return 0;
}