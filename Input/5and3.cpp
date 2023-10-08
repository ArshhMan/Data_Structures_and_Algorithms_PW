#include <iostream>
using namespace std;
int main(){
cout<<"Enter an integer"<<endl;
int n;
cin>>n;
if(n%5==0 && n%3==0 ){
    cout<<"Matching condition"<<endl;
}
else{
    cout<<"NOT Matching condition"<<endl;
}
return 0;
}