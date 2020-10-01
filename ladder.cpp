#include<iostream.h>
#include<stdio.h>
#include<system.h>
void main()
{
  int a,b,c,d,e;
 cout<<"Enter odd length : ";
 cin>>a;
 b=c=a/2;
 if((a%2)==0)
 e=a/2;
 else
 d=(a/2)+1;
 for(int j=1;j<=d;j++)
 {
  for(int i=0;i<=a;i++)
  {
   if((i<b)||(i>c))
   cout<<"   ";
   if((i>=b)&&(i<=c))
   cout<<" # ";
  }
  cout<<endl;
  b--;
  c++;
 }
 cout<<"Done";
 system("PAUSE");
}
