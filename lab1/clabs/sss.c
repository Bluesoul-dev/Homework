#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0,x,i;
    scanf("%d,&n");
    for(i=1;i<=10;i++){
        x=n%2;
        n=(int)(n/pow(2,i));
        if(x==1){
            count=count+1;
        }
    }
    print("%d,count");
    return 0;
}