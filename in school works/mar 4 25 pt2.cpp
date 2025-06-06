#include <iostream>
using namespace std;
struct MyException{
    const char* test() const throw(){
        return "MY ERROR";
    }
};

double division(double a, double b){
    if(a!=0 && b==0){
        throw "Zero Division error";
    } else if(b==3){
        throw MyException();
    } else if(a==0 && b==0){
        throw 404;
    }
    return(a/b);
}

int main() {
    try{
        int num1 = 6 , num2 = 3;
        cout<<division(num1, num2)<<endl;
    }
    catch(const char* msg){
        cout<<msg<<endl;
    }
    
    catch(MyException& e){
        cout<<e.test()<<endl;
    }
    
    catch(int x){
        cout<<x<<endl;
    }
  

    return 0;
}
