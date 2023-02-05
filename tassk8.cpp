#include<iostream>
using namespace std;
main()
{
    int arrsize;
    cout<<"how many color pencil you want :";
    cin>>arrsize;
    int counter=0;
    string color[arrsize];
    for( int i=0 ;i<arrsize ;i++)
    {
         cout<<"enter color pencil:";
         cin>>color[i];
    }
    string colour=color[0];
    for(int i=1 ;i<arrsize ;i++)
    {
        if(colour!=color[i])
        {
            counter=counter+1;
        }
        colour=color[i];
    }
    int multiple=2*arrsize+counter;
    cout<<multiple;
}