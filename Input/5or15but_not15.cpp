#include <iostream>
using namespace std;
int main(){
cout<<"Enter an integer"<<endl;
int x;
cin>>x;
if((x%5==0 || x%3==0 ) && (x%15!=0)){
    cout<<"The number is divisible by 5 or 3 but not 15";
}
else {cout <<"The condition does not hold"<<endl;}
return 0;
}