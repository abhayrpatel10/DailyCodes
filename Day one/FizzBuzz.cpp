#include<iostream>
using namespace std;

void fizzbuzz();

int main()
{
	fizzbuzz();
	return 0;
}

void fizzbuzz(){
	int n;
	cout<<"Enter a number";
	cin>>n;

	for(int i=1;i<=n;i++){
		if(i%3==0 && i%5==0){
			cout<<"FizzBuzz";
		}
		else if(i%3==0){
			cout<<"Fizz";
		}
		else if(i%5==0){
			cout<<"Buzz";
		}
		else{
			cout<<i;
		}


}
