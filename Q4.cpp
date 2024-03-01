#include<iostream>
using namespace std;
int main(){
    int r,h;
    cout<<"Enter the radius of cylinder : ";
    cin>>r;
    cout<<"Enter the height of cylinder : ";
    cin>>h;
    float v=3.14*r*r*h;
    cout<<v<<" is the volume of cylinder";
}