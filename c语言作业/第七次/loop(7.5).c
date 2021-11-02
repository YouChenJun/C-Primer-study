#include <stdio.h>
int getrnum(int num){
    int rnum = 0;
    do{
        rnum = rnum*10;
        rnum = rnum + num%10;
    }while((num/=10)!=0);
    return rnum;
}

int loop(int x){
    if(x==getrnum(x))
        return 1;
    else return 0;
}

int main(){
    int a,b,i,flag;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        flag = loop(i);
        if(flag==1)
		{
            printf("%d\n",i);
            flag = 0;
        }
    }
    getchar();
    return 0;
}

