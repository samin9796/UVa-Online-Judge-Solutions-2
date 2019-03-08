#include<stdio.h>
int main()
{
    long int n,i,count,t;

    while(scanf("%d",&n)!=EOF){
        if(n==0)break;
        int a[100000];

        for(i=0;i<n;i++)scanf("%d",&a[i]);
        count = 0;
        t = i-1;
        for(i = 1;i<n-1;i++){
            if(a[i]>a[i-1] && a[i]>a[i+1])count++;
            else if(a[i]<a[i-1] && a[i]<a[i+1])count++;
        }

        if((a[0]>a[t] && a[0]>a[1]) || (a[0]<a[t] && a[0]<a[1]))count++;
        if((a[t]>a[0] && a[t]>a[t-1]) || (a[t]<a[0] && a[t]<a[t-1]))count++;
        printf("%d\n",count);
    }

    return 0;
}
