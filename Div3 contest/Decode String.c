#include<stdio.h>
//incomplete
int main(){
    int n,t;
    char a[100],x;

    for(int i=0;i<t;i++){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%c",&a[i]);
        }
        for(int i=0;i<n;i++){
            if(a[i]=='0'){
                int p;
                p=(a[i-2]-'0')*10+(a[i-1]-'0');
                printf("%c",p+96);
            }
            else{
                int p;
                p=(a[i]-'0'+'a'-1);
                printf("%c",p);
            }
        }
    }
    return 0;

}
