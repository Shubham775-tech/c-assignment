/******************************************************************************

                       This code is run in "https://www.onlinegdb.com/online_c++_compiler"
*******************************************************************************/

#include <iostream>

using namespace std;

float area(int b , int h)
{
    return (b * h)/2 ;
}

int rect(int w, int p)
{
    return w * p;
}

int main()
{
    int e ;
    int p ;
    int y ;
    int w ;
    int a ;
    int b ;
    int h ;
    cout<< " What do you want to Calculate ?\n" ;
    cout<< " 1) Area of Triangle \n " ;
    cout<< " 2) Area of Rectangle \n" ;
    cout<< "Enter your choice: \n" ;
    
    cin>> a;
    if (a == 1){
        cout<< "\n Enter Base of Triangle \n" ;
        cin>>b ;
        cout<< "\n Enter Height of Triangle \n" ;
        cin>>h ;
        
        float y =  area(b , h) ;
        cout<< "\n The Area of Triangle is :- " << y<<endl ;
    }
    else if (a == 2){
        cout<< "\n Enter Width of Rectangle \n" ;
        cin>>w ;
        cout<< "\n Enter Height of Rectangle\n" ;
        cin>>p ;
        
        float e =  rect(w , p) ;
        cout<< "\n The Area of Triangle is :- " << e<<endl ;
    }
    
    return 0;  
    
}

/*
output:-
What do you want to Calculate ?                                                                                              
 1) Area of Triangle                                                                                                          
  2) Area of Rectangle                                                                                                        
Enter your choice:                                                                                                            
1                                                                                                                             
                                                                                                                              
 Enter Base of Triangle                                                                                                       
2                                                                                                                             
                                                                                                                              
 Enter Height of Triangle                                                                                                     
5                                                                                                                             
                                                                                                                              
 The Area of Triangle is :- 5 


What do you want to Calculate ?                                                                                              
 1) Area of Triangle                                                                                                          
  2) Area of Rectangle                                                                                                        
Enter your choice:                                                                                                            
2                                                                                                                             
                                                                                                                              
 Enter Width of Rectangle                                                                                                     
5                                                                                                                             
                                                                                                                              
 Enter Height of Rectangle                                                                                                    
5                                                                                                                             
                                                                                                                              
 The Area of Triangle is :- 25 
*/
