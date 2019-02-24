#include<stdio.h>
int a[5][5],arr[15],n,t;
main()
{
    int i;
    printf("\nEnter the number of elements of the array : ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array :\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    grouping();
}
int grouping()
{
    int i=0,j,k;
    for(i=0;i<5*i+4;i++)
    {

            sort(i);
    3}
    for(k=0;k<i;k++)
 {for(j=0;j<5;j++)
        printf("%d\t",a[i][j]);
    printf("\n");
}
}
int sort(int t)
{
    int i,j,v;
    for(i=1;i<=5;i++)
    {
        v=a[t][i];
        j=i;
        while((a[t][j-1])>v&&j>=a)
        {
            a[t][j]=a[t][j-1];
            j--;
        }
        a[t][j]=v;
    }
return 0;
}
