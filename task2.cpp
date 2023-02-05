#include<iostream>
using namespace std;
main()
{
    string movie[5]={"glaidator","starwars","terminator","takinglives","tombrider"};
    int counter=1 ;
    float discount,price;
    string moviename;
    cout<<"enter movie name :";
    cin>>moviename;
  int x=0;
  while(movie[x]!=moviename)
  {
    counter=counter+1;
    x++;
  }
    if(counter%2==0)
    {
        discount=500*0.1;
        price=500-discount;
    }
    else
    {
        discount=500*0.05;
        price=500-discount;
        
    }
    cout<<price;

    
        

}