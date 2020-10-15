#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   start:
   
   int a,b;
   char ch;
   cout<<" enter two numbers="<<endl;
   cin>>a>>b;
   int ans;
   ans=a*b;
   cout<<"the ans of * is="<<ans;
   ans=a+b;
   cout<<"ans of + is ="<<ans;
   ans=a-b;
   cout<<"ans of -"<<ans;
    
   cout<<"enter character"<<endl;
   cin>>ch;
 
   	
   
   
 
     while(ch)
   {
   	if(ch=='n')
   	  	break;
   	  	
   	  	
   	  	 goto start;
   }
   
 
   
  
  
   
   
   
   return 0;	
}
