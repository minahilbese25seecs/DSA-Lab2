#include <iostream>
using namespace std;
//part#1
void analyze_pointer(int *ptr) {

cout<<"Memory location of the pointer: "<<ptr<<endl;
cout<<"value of the integer (which the pointer points to) to: "<<*ptr<<endl;
}
int main(){
int a=3;
cout<<"Stack Memory: "<<endl;
analyze_pointer(&a);
cout<<"Heap Memory:"<<endl;
int *b=new int(3);
analyze_pointer(b);

}