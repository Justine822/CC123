#include <iostream>
using namespace std;

double division(double a, double b){
    if(a!=0 && b==0){
        throw "Zero Division error";
    } else if(b==3){
        throw "an error occured";
    } else if(a==0 && b==0){
        throw 404;
    }
    return(a/b);
}

int main() {
    try{
        int num1 = 0 , num2 = 0;
        cout<<division(num1, num2)<<endl;
    }
    catch(const char* msg){
        cout<<msg<<endl;
    }
    catch(int x){
        cout<<x<<endl;
    }
  

    return 0;
}
