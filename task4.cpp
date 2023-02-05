#include<iostream>
using namespace std;
main()
{
    int arrsize;
    cout<<"enter array size :";
    cin>>arrsize;
    int number[arrsize];
    string reslut;
     for(int i=0 ;i<arrsize ;i++)
    {
        cout<<"enter values :";
        cin>>number[i];
    }
    for(int i=0 ;i<arrsize ;i++)
    { 
        for(int j=1;j>0;i++)
        {
         
        int  num=number[i]%10;
        
        int num2=number[i]/10;
        cout<<num2;

        if(num==7)
        {
            reslut="boom";
           break; 
        }
        else
        {
            reslut="does not have 7";

            
        }
        number[i]=num2;
        if(num2==0)
        {
            j=0;
        }
    
       }
        if(reslut=="boom")
        {
            break;
        }
    }

    cout<<reslut;
}
