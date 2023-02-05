#include<iostream>
using namespace std;
main()
{
    int number[3];
    int num;
    int reslut;
    for(int  i=0;i<3;i++)
  {
    cout<<"enter numbers :";
    cin>>number[i];
  }
  cout<<"enter number of time even-odd transformation to be done :";
  cin>>num;
  
   for( int i=0 ;i<3 ;i++)
   {int  total=0;
       
  for(int j=1;j<=num;j++)
  { 

     if(number[i]%2==0 )
     {
        reslut=number[i]-2;
        total=total+reslut;
        
     }

     else
     {
      reslut=number[i]+2;
      total=total+reslut;
     }
  }
  cout<<total <<"   " ;
   }


}