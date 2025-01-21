#include <iostream>
using namespace std;
void fibo(int limit){
	long long int num1=0,num2=1,temp,total=0;
	for (int i=0; i<limit; i++){
	    if (i % 2 == 0) {
	        
	        total+=num1;
	    }
	    cout<<num1<<endl;
	    temp = num1;
		num2=num1+num2;
		num1=num2;
		num2=temp;
	   
	}cout<< "the total of fibonannci sequence: "<<total;
}
int main() {
    int limit;
    cout<<"Enter limit: ";
    cin>>limit;
    fibo(limit);
    return 0;
}
