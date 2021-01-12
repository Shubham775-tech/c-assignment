/******************************************************************************

                        This code is run in "https://www.onlinegdb.com/online_c++_compiler" 

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //Declaring variable 
    int a , f , i;
    
    cout << "Enter the number to find the factorial of it :";
    cin >>a;
    
    f = 1;
    
    for(i=1 ; i<=a ; i++)
    {
        f = f * i;
    }
    
    cout << "The Factorial of the given number is :- " << f ;
    

    return 0;
}

/*
Output:-
Enter the number to find the factorial of it :6                                                                             
The Factorial of the given number is :- 720 

*/
