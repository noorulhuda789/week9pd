#include<iostream>
using namespace std;
main()
{
    string identical[4];
    string reslut;
    for(int i=0 ;i<4 ;i++)
    {
        cout<<"enter values :";
        cin>>identical[i];
    }
  string word=identical[0];
  for(int x=1;x<=3;x++)
  {
     if(word==identical[x])
     {
        reslut="true";
         
     }
     else
     {
        reslut="false";
        break;

        
     }
  }
  cout<<reslut;
}