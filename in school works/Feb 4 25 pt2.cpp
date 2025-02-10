#include <iostream>
#include <cmath>
using namespace std;
//pyramid
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
//cone
class cone: public shape{
    public:
    cone(double r, double h);
    //void cone_vol();
    void cone_area();
    
};
cone::cone(double r, double h){
    radius=r;
    height=h;
};

//void cone::cone_vol(){
    //double vol=0;
   // vol=3.1415926*(radius*radius*height)/3;
   // cout<<"The volume of cone is "<<vol<<endl;
//}
void cone::cone_area(){
    double area=0;
    area=3.1415926*(pow(radius,2))+3.1415926*radius*sqrt(pow(radius,2)+pow(height,2));
    cout<<"The volume of area is "<<area<<endl;
}
int main(){
    //pyramid smallPyra(2,4);
    //smallPyra.getDimension();
    //smallPyra.pyramid_vol();
    
    cone bigcone(5,20);
    bigcone.getDimension();
    //bigcone.cone_vol();
    bigcone.cone_area();
    return 0;
}
