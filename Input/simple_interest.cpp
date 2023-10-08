#include <iostream>
using namespace std;
int main(){
    float p,r,n;
    cout<<"Enter principle amount: ";
    cin>>p;
    cout<<"Enter rate of interest: ";
    cin>>r;
    cout<<"Enter number of years: ";
    cin>>n;
    cout<<"The simple interest is :"<<(p*r*n)/100;
}