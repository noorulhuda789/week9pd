#include<iostream>
using namespace std;
main()
{
    string fruit[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    string fruitname;
    cout<<"enter fruit naame :";
    cin>>fruitname;
    int quantity;
    cout<<"quantity:";
    cin>>quantity;
    int counter=0;
    for( int i=0;i<4;i++)
    {
        if(fruitname==fruit[i])
        {
            counter=i;
        }
    }
    
     int total=quantity*price[counter];
     cout<<total;
}