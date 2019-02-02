#include <iostream>
using namespace std;


int main() {
  
  char input[1000];
  char rev[1000];

  cout<<"Enter the string";

  cin>>input;

  int count=0;
  while(input[count]!='\0'){
    count++;
  }

  //cout<<count;
  int end=count-1;

  for(int i=0;i<count;i++){
    rev[end]=input[i];
    end--;
  }


  cout<<rev;
}
