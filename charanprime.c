#include<stdio.h> 
//Function

 //1)function prototype
int prime(); //it can understand by compiler to excuting the function in main

 //2) calling function 
void main() {
prime(); // it calls the called function
}

 //3) called function (function declaration)
 int prime() {
  int i,n,c=0;
  printf("enter n value");
  scanf("%d",&n);
  for(i=1;i<=n;i++) {
    if(n%i==0) {
        c++;                       //code written in this 
    }
  }
  if(c==2) {
    printf("%d is prime number",n);
  }
  else {
    printf("%d is not prime number",n);
  }
  return 0;
 }