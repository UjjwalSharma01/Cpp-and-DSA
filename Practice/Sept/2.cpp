// #include <iostream>
// using namespace std;
// class a {
// public:
// int b;
// void Seta(int b){
//   this-> b = b;
// }
// };
// a sum(a obj1, a obj2){
//   a obj3;
//   obj3.b = obj1.b+obj2.b;
//     return obj3;
// }
// int main () {
//   // passing object as a parameter in the 
//   a obj1, obj2, obj4;
//   obj1.Seta(12);
//   obj2.Seta(12);
//   obj4 = sum(obj1, obj2);
//   cout<<obj4.b<<endl;
  
//   return 0;
// }


// Pass by value 


// #include <iostream>
// using namespace std;
// void swap (int a, int b){
//   int temp;
//   temp =a;
//   a=b;
//   b=temp;
//   cout<<"inside pass by value swap function"<<endl;
//   cout<<"Value after swapping"<<endl;
//   cout<<"so the value of a and b after swapping is "<<a<<" "<<b<<endl;
// }
// void swap2 (int &a, int &b){
//   int temp;
//   temp =a;
//   a=b;
//   b=temp;
//   cout<<"inside pass by value swap function"<<endl;
//   cout<<"Value after swapping"<<endl;
//   cout<<"so the value of a and b after swapping is "<<a<<" "<<b<<endl;
// }
// void swap3(int* a, int* b){
//   int temp;
//   temp = *a;
//   a* = *b;
//   b* = temp;
//   cout<<"inside pass by value swap function"<<endl;
//   cout<<"Value after swapping"<<endl;
//   cout<<"so the value of a and b after swapping is "<<a<<" "<<b<<endl;
// }

// int main() {
//   int a;
//   int b;
//   int* c;
//   int* d;
//   cout<<"Enter the value of a and b"<<endl;
//   cin>>a>>b;
//   cout<<"Enter the value of C and D"<<endl;
//   cin>>c>>d;
//   swap(a,b);
//   cout<<"Actual value after swapping using pass by value"<<endl;
//   cout<<"so the respective value of a and b is "<<a<<" "<<b<<endl;
//   swap2(a,b);
//   cout<<"Actual value after swap using pass by reference"<<endl;
//   cout<<"so the respective value of a and b is "<<a<<" "<<b<<endl;
//   swap3(&c,&d);
//   cout<<"Actual value after swap using pass by pointer"<<endl;
//   cout<<"so the respective value of c and d is "<<a<<" "<<b<<endl;
  
  
//   return 0;
// }


// pass by reference 
// pass by pointer
