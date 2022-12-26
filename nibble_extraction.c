#include<stdio.h>
int* bits(int h,int k[],int n)
{
    for(int i=(n-1);i>=0;i--)
    {
        k[i]=((h>>i)&1);
    }
    return k;
}
void main()
{
    int *lower;
    int *upper;
    int k[4],arr[4];
    int a=0x82;
    int l=(a&0x0f);  //lower
    int u=(a>>4)&0x0f; //upper
    printf("lower=%d, upper=%d\n",l,u);
    lower=bits(l,k,4);
    upper=bits(u,arr,4);
    printf("lower in bin\n");
    for(int i=3;i>=0;i--)
    {
        printf("%d ",lower[i]);
    }
    printf("\n Upper in bin\n");
    for(int i=3;i>=0;i--)
    {
        printf("%d ",upper[i]);
    }

}
