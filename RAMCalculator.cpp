#include<iostream>

using namespace std;

int main()
{
    cout<<"#### RAM PERCENTAGE CALCULATOR ####"<<endl;
    
    double ramamount, rampercent, calculate, ramamount2, result;
    cout<<"Enter the wanted ram amount:"<<endl;
    cin>>ramamount;
    cout<<"Enter the current ram amount:"<<endl;
    cin>>ramamount2;
    cout<<"Enter the ram percentage:"<<endl;
    cin>>rampercent;
    calculate=ramamount/ramamount2;
    result=rampercent/calculate;
    cout<<"Calculated RAM Percentage is %"<<result<<endl;
    
    
    
    system("pause");
    
    



}

