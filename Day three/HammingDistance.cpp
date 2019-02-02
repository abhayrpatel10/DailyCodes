#include <iostream>
#include<string.h>

using namespace std;

int main() {

  char string1[100];
  char string2[100];
  cout<<"Enter string one"<<endl;
  cin>>string1;
  cout<<"Enter String two"<<endl;
  cin>>string2;

  if(strlen(string1)==strlen(string2)){

    int count=0;
  

  while(string1[count]!='\0'){
    count++;
  }
  
  int hammingDistance=0;

  for(int i=0;i<count;i++){
    if(string1[i]!=string2[i]){
      hammingDistance++;
    }
  }

  cout<<"Hamming Distance is\t"<<hammingDistance;

  }
  else{
    cout<<"Length of the Strings dont match";
  }

  

  

}