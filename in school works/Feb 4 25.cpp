#include <iostream>
using namespace std;

class shape{
  protected:
  double length, width, height;
  public:
  shape(double len, double wid, double hgt);//constructur
  ~shape();//deconstructor
  void getDimension();
};

shape::shape(double len, double wid, double hgt){
    cout<<"Initializing shape class"<<endl;
  length=len;
  width=wid;
  height=hgt;
};
shape::~shape(void){
    cout<<"Deleting class..."<<endl;
};

void shape::getDimension(){
    cout<<"The length is: "<<length<<endl;
    cout<<"The width is: "<<width<<endl;
    cout<<"The height is: "<<height<<endl;
}

int main() {
    shape smallBox(1,2,5);
    smallBox.getDimension();
    
    return 0;
}
