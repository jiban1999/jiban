#include<stdio.h>
int BinarySearch(int x,int arr[],int h,int l)
{
    while (l<h)
    {
        printf("loop work");
        int mid=l+(h-l)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        if(arr[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[10],s,i,k;
    printf("\n Enter the array size of \n:");
      scanf("%d",&s);
      printf("\n Enter the arrays eleent\n:");
      for(i=0;i<=s-1;i++)
        {
          scanf("%d",&arr[i]);
        }
      for (i=0;i<s;i++)
        {
          printf("\n The arrays element is:%d\n",arr[i]);  
        }
    printf("\n Enter the element you Wount to find:\n");
    scanf("%d",&k);
    int Result=BinarySearch(k,arr,s-1,0);
    if(Result== -1)
    {
        printf("\nEleent Not found");
    }
    else
    {
        printf("\nThe Element was found:%d\n%d",Result,arr[Result]);
    }
return 0;
}