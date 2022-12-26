//will not give corrrect ans

#include<stdio.h>
int* bubble(int* a,int n)
{
    int temp=0;
    for(int i=0;i<n-1;i++) //for number of pass
    {
        for(int j=0;j<n-i-1;j++)  //for comparison in each pass
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
       // printf("%d",i)
        printf("%d ",a[i]);
    }
    printf("\n");
 return a;
}
int socks(int *arr,int n)
{
    int sum=0,a[n],pair=0;
    int ans=0,i=0,j=1,k=0,count=0;
    int current = arr[0];
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                printf(" a[i]=%d,i=%d a[j]=%d,j=%d count=%d\n",arr[i],i,arr[j],j,count);
                if(count==2)
                {
                    pair++;
                    count-=2;

                }
            }
        }
    }
    return pair;
}
void main()
{
    int n=0,i=0;
    int *arr;
    printf("Enter number\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter color codes\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    arr=bubble(a,n);
    int ans = socks(arr,n);
    printf("\n%d",ans);
}

