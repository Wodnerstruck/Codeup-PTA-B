#include <cstdio>
int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
    int year,month,day;
    int T;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d %d",&year,&month,&day);
        day++;
        if(day==months[month]+1){month++;day=1;}
        if(month==13){year++;month=1;}

        printf("%04d-%02d-%02d\n",year,month,day);
    }
}