/******************************************************************************

                       This code is run in "https://www.onlinegdb.com/online_c++_compiler"
*******************************************************************************/

#include <iostream>

using namespace std;


int main()
{
    int a , b;
    cout<< " Enter First Number:- ";
    cin>>a;
    cout<<" Enter Second Number:- ";
    cin>>b;
    cout<<"Before swap a= "<<a<<" b= "<<b<<endl;      
    a=a*b;     
    b=a/b;    
    a=a/b;     
    cout<<"After swap a= "<<a<<" b= "<<b<<endl;      
    return 0;  
    
}

/*
output:-
Enter First Number:- 5                                                                                                       
 Enter Second Number:- 10                                                                                                     
Before swap a= 5 b= 10                                                                                                        
After swap a= 10 b= 5

*/
