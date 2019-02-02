#include <iostream>
#include<string.h>

using namespace std;

int isPalindrome(char a[]){
  int n=strlen(a);
  for(int i=0;i<n/2;i++){
    if(a[i]!=a[n-i-1]){
      return 0;
    }
  }
  return 1;
}

int main() {
  char input[1000];
  cout<<"Enter a string";
  cin>>input;

  int result;
  //int n=strlen(input);

  result = isPalindrome(input);

  if(result){
    cout<<"Palindrome"<<endl;
  }else{
    cout<<"Not a palindrome";
  }


  


}
