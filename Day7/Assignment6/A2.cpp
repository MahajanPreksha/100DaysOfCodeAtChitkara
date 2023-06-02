#include<iostream>
using namespace std;
float area(float r){
    return 3.14 * r * r;
}
float circumference(float r){
    return 2 * 3.14 * r;
}
int main(){
    float r;
    cin>>r;
    cout<<"Area of circle is: "<<area(r)<<endl;
    cout<<"Circumference of circle is: "<<circumference(r);
    return 0;
}