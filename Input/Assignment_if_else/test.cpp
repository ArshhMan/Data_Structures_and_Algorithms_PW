#include <iostream>
using namespace std;
int main(){
    char character;
    cout<<"Character to be identified "<<endl;
    cin>>character;
    if ((character >='a'&& character<='z')||(character >='A'&& character<='Z')){
        cout<<"It is an alphabet"<<endl;
    }


    else if ((character >='0'&& character<='9')){
        cout<<"It is a digit "<<endl;
    }
    else if ((character >='!'&& character<='/')|| (character >=':'&& character<='@')){
        cout<<"It is a special character  "<<endl;
    }
}