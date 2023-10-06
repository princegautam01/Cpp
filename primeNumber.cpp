#include<iostream>

using namespace std;

int main(){

int n;
cin>>n;
bool isPrime = 1;

for(int i = 2 ; i < n ; i++){ // 1 _2__3__4__5__6 7 for example7
    
    if (n%i==0){

        isPrime = 0;
        
        
    }
   }
if(isPrime==1){
      
      cout<<" Prime";

   }
else{
     
     cout<<" Not Prime";

   }



    return 0;
}