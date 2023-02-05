#include<iostream>
using namespace std;
int number(char num)
{ 
    int value;
    if(num=='0')
    {
        value=0;
    }
    else  if(num=='1')
    {
        value=1;
    }
    else  if(num=='2')
    {
        value=2;
    }
    else  if(num=='3')
    {
        value=3;
    }
     else if(num=='4')
    {
        value=4;
    }
    else  if(num=='5')
    {
        value=5;
    }
    else  if(num=='6')
    {
        value=6;
    }
    else  if(num=='7')
    {
        value=7;
    }
     else if(num=='8')
    {
        value=8;
    }
    
    else 
    {
        value=9;
    }
    return value;
    
}
main()
{
    string reslut="false";
    string moves[10]={"shimmy","shake","pirouette","slide","boxstep","headspin","dasoda","pop","lock","arabesque"};
    string find{4};
    cout<<"enter your  pin number :";
    getline(cin,find);
    for(int i=0;i<4;i++)
    {
            if(find[i]>='0' &&  find[i]<='9'   )
            {
                reslut="true";
                
            }
            else
            {
                
               reslut="false";
               break;
                
            }
    }
    
    if(reslut=="true")
    {
        for(int i=0 ;i< 4 ;i++  )
        {
            int value=number(find[i]);
             int dance=value+i;
            if(dance>9)
            {
                 int final=dance-10;
                 cout<<"  "<<moves[final] ;
            }
            else
            {
                cout<<"  "<<moves[dance];
        
            }
        }
    }
    else
    {
        cout<<"invalid inpiut";
        
    }

}
