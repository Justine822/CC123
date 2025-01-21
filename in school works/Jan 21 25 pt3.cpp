#include <iostream>
using namespace std;
void fibo(int limit){
	long long int num1=0,num2=1,temp;
	for (int i=0; i<limit; i++){
	    cout<<num1<<endl;
		temp = num1;
		num2=num1+num2;
		num1=num2;
		num2=temp;
		
	}
}
int main() {
    int limit;
    cout<<"Enter limit: ";
    cin>>limit;
    fibo(limit);

    return 0;
}
