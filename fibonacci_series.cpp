#include<iostream>

using namespace std;

int main(){
 // Fibonacci Series = (n-1) + (n-2)
 int a = 0;
 int b = 1;
 int n;
 cin>>n;
cout<<a<<" "<<b<<" ";
for(int i = 1 ; i <= n ; i++){
     
     int next = a + b;
     cout<<next<<" ";
     a = b;
     b = next;

}

return 0;

}