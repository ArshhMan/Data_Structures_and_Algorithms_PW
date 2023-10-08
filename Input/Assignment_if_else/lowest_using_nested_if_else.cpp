//If the marks of A, B and C are input through the keyboard, 
//write a program to determine the student scoring least marks. 
//
#include <iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter marks of first student "<<endl;
cin>>a;
cout<<"Enter marks of second student "<<endl;
cin>>b;
cout<<"Enter marks of third student "<<endl;
cin>>c;
if(a<b){
    if(c>a){
        cout<<"marks of first student are lowest"<<endl;
    }
    else{// a <b ,c<a
        cout<<"marks of third student are lowest"<<endl;
    }

}
else{//a>b ,
if(c>b){//a>b,c>b
            cout<<"marks of second student are lowest"<<endl;

}

else{////a>b ,c<b
cout<<"marks of third student are lowest"<<endl;
}
}
}