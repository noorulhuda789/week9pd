#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"enter word :";
    cin>>word;
    int leng=word.length();
    string word1;
    cout<<"enter second word :";
    cin>>word1;
    
     int leng1=word1.length();
    int i,j ,counter=0,counter1=0;
    for(i=0;i<leng;i++)
    
    { 
        for(j=0;j<i;j++)
        {
        if(word[i]==word1[j])

        {
            counter++;
            word[j]='.';
            break;

         }
     
        }
        
    }
    cout<<counter;
    

}
