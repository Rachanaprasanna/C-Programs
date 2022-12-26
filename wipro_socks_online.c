#include<stdio.h>

int sockMerchant(int n, int arr[])
{
    int freq[101]={0};
    int ans = 0,i;
    for(i=0;i<n;i++)
    {
        freq[arr[i]]++;
         printf("freq=%d ",freq[arr[i]]);
    }
    for(i = 0; i <=101; i++)
    {
      ans = ans+ freq[i]/2;
    }
    return ans;
}
int main ()
{
    int n;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    int arr[n],i;
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int ans=sockMerchant(n,arr);
    printf("\n%d\n",ans);
    return 0;
}

