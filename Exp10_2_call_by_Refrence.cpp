// Papri Sen
// 24070123070
// A3

#include <iostream>
using namespace std;
void swap(int&x, int&y){
    int swap;
    swap=x;
    x=y;
    y=swap;
}
int main() {
   int a=5;
   int b=10;
   swap(a,b);
   cout<<"value of a is:"<<a<<endl;
   cout<<"value of b is:"<<b<<endl;

    return 0;
}

/*
Output:
value of a is:10
value of b is:5
*/
