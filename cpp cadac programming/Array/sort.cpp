#include<iostream>
using namespace std;
int main()
{
	int i,temp;
	int a[5]={10,9,22,5,23};
	for(i=0;i<4;i++)
	{
        for (int j = 1; j < 5; i++)
        {
                 
      if (a[j]<=a[i])
      {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
      }
      
             
	}
 
}
 cout<<a[i]<<" "; 
// for ( i = 0; i < 5; i++)
// {
//     cout<<a[i]<<" ";
// }
return 0;
}



