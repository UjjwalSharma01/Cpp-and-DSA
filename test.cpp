#include <bits/stdc++.h>
using namespace std;
class abc{
    public:
    static int x,y;
    static void print(){
        cout<<x<<" "<<y<<endl;
    }
};
int abc::x; //definiting that x and y are related to all the instances made via this class
int abc::y;
int main(){
    abc a;
    abc b;
    a.x=1;
    a.y=2;
    b.x=3;
    b.y=4;
    abc::print();
    a.print();

    return 0;
}