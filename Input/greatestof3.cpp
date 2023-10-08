#include <iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter the first number"<<endl;
cin>>a;
cout<<"enter the second number"<<endl;
cin>>b;
cout<<"enter the third number"<<endl;

cin>>c;

if(a>b){
if(a>c){
    cout<<"The first number is the greatest"<<endl;
}
else{//  a>b && c>a
cout<<"The third number is the greatest"<<endl;
}
}
else{//b>a 
if(b>c){
    cout<<"The second number is the greatest"<<endl;
}
else{
    cout<<"The third number is the greatest"<<endl;

}

}


}