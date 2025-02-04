#include <iostream>
using namespace std;

class shape{
     protected:
     double length=0, height=0, base=0;
     double radius=base/2;
     public:
     void getDimension();
};

void shape::getDimension(){
    if(length > 0){
        cout<<"The length is "<<length<<endl;
    }
     if(base > 0){
        cout<<"The base is "<<base<<endl;
    }
     if(height > 0){
        cout<<"The height is "<<height<<endl;
    }
     if(radius > 0){
        cout<<"The radius is "<<radius<<endl;
    }
}

class pyramid: public shape{
    public:
    pyramid(double b, double h);
    void pyramid_vol();
};

pyramid::pyramid(double b, double h){
  base = b;
  height = h;
};

void pyramid::pyramid_vol(){
    double vol=0;
    vol= (base*height)/3;
    cout<<"The volume of pyramid is "<<vol<<endl;
}

int main(){
    pyramid smallPyra(2,4);
    smallPyra.getDimension();
    smallPyra.pyramid_vol();
    return 0;
    
}
