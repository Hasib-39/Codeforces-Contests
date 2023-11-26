#include<stdio.h>
#include<math.h>
int main(){
    int t,a,b,c,t1,t2,i;
    scanf("%d",&t);
    for( i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        t1=abs(a-1);
        t2=abs(b-c)+abs(c-1);
        if(a==1)
            printf("1\n");
        else if(c==1&&a>1){
              t2=abs(b-c);
            if(t1<t2)
                printf("1\n");
            else if(t2<t1)
                printf("2\n");
            else
                printf("3\n");
        }
        else if(a==1&&b==1&&c==1)
              printf("3\n");
        else if(a>1&&c>1){
            if(t1<t2)
                printf("1\n");
            else if(t2<t1)
                printf("2\n");
            else
                printf("3\n");        }
    }
    return 0;
}
