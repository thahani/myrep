#include<stdio.h>
int main()
{
int a[5],i,n,num,found=0,pos=-1,beg,mid,end;
printf("\n enter the no of element in array\n");
scanf("%d",&n);
printf("\n enter the elment");
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("\n enter the element to be searched");
scanf("%d",&num);
beg=0,end=n-1;
while(beg<=end)
{
mid=(beg+end)/2;
if(a[mid==num])
{
printf("%d is found at position %d",num,mid);
found=0;
break;
}
if(a[mid]>num)
end=mid-1;
}
if(beg>end&&found==0)
printf("%d does not found",num);
return 0;
}
