#include <iostream>
using namespace std;
int main(){
  int length,breadth;
  cin>>length>>breadth;
  float area=length*breadth;
  float perimeter=2*(length+breadth);

  if(area>perimeter){
    cout<<"Area is greater"<<endl;
  }
}