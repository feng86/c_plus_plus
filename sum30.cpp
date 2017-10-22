#include<iostream>
using namespace std;

int main()
{

  int a[]={1,3,5,7,9,11,13,15},sum=0;
  for(int i=0;i<8;i++)
  {
      for(int j=0;j<8;j++)
      {
          for(int k=0;k<8;k++)
          {
              sum=a[i]+a[j]+a[k];
              if(sum==30)
                break;
          }
      }
  }
  cout<<"sum is "<<sum<<endl;
}
