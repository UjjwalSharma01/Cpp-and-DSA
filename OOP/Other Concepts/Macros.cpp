/*MACROS
->screenshot
syntax -> using #define
macros are pre processror directives which allows you to define constansts functions or code snippets that can be used throughout your code


keywords used 
-> pre-processor
-> #define


Understanding pre-processor 

compilation process
compiler -> pre processing -> compile -> machine code -> exe

compilatiions se pehele, pi ki value uthaega, #define hatadega and pi ki value ko replace kr dega


USE - CASE

-> increase redability and reusability and make the coding easy
-> defined mostly in capital letters




*/

#include <iostream>
using namespace std;

#define PI 3.142912923 // its not consuming any space as such
#define MAX(x,y) (x>y ? x:y) // urinary if else operatore "?" ke baad wala varable is if true to ye krdo else ":" ye krdo

float circlearea(float r) {
    return PI * r * r;
}

int main() {
    cout << circlearea(65.4) << endl;
    return 0;
}
