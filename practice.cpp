#include <iostream>
using namespace std;
int main()
{
    int side1, side2, side3;
    cout << "Enter the three sides: "<<endl;
    cin >> side1 >> side2 >> side3;
    if (side1==side2 && side3 == side1 )
    {
        cout<<"Equilateral Triangle"<<endl;
        
    }
    else if(side1==side2 || side2 == side3 || side3 == side1){
        cout<<"Isosceles Triangle"<<endl;
    }
    else{
        cout<<"Scalene Triangle"<<endl;
    }
    
    return 0;
}