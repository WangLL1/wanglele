#include <iostream>
using namespace std;
int main()
{
 int T,N,num,start,end;
 cin>>T;
 for(int k=0;k<T;k++)
 {
  cin>>N;
  int max=-1001,sum=0,temp=1;
  for(int i=0;i<N;i++)
  {
   cin>>num;
   sum+=num;
   if(sum>max)
   {
    max=sum;
    start=temp;
    end=i+1;
   }
   if(sum<0)
   {
    sum=0;
    temp=i+2;
   }
  }
  cout<<"Case "<<k+1<<":"<<endl<<max<<" "<<start<<" "<<end<<endl;
  if(k!=T-1) cout<<endl;
 }
 return 0;
}