/*测试输入包含若干场考试的信息。每场考试信息的第1行给出考生人数N ( 0 < N < 1000 )、
考题数M ( 0 < M < = 10 )、分数线（正整数）G；第2行排序给出第1题至第M题的正整数分值；
以下N行，每行给出一名考生的准考证号（长度不超过20的字符串）、该生解决的题目总数m、
以及这m道题的题号（题目号由1到M）。 
当读入的考生人数为0时，输入结束，该场考试不予处理。

对每场考试，首先在第1行输出不低于分数线的考生人数n，随后n行按分数从高到低输出上线考生的考号与分数，
其间用1空格分隔。若有多名考生分数相同，则按他们考号的升序输出。
*/
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

struct Student{
    char id[21];
    int score;
}stu[1000];

bool cmp(Student a,Student b){
    if(a.score!=b.score){
        return a.score>b.score;
        }
    else{
       return strcmp(a.id,b.id)<0;
    }
}
int main(){
    int N,M,G;
    while(scanf("%d%d%d",&N,&M,&G)&&N!=0){
        int quscore[10];
        for(int i=0;i<M;i++){
            scanf("%d",&quscore[i]);
        }
    int n=0;//达标学生数
    for(int i=0;i<N;i++){
        char id_[21];
        int m;//做对题数
        scanf("%s%d",id_,&m);
        int score_=0;//加小题分得总分
        for(int j = 0;j<m;j++){
            int qn;//题号
            scanf("%d",&qn);
            score_+=quscore[qn-1];
        }
    if(score_>=G){
        strcpy(stu[n].id,id_);
        stu[n++].score=score_;
    }
        
    }
    sort(stu,stu+n,cmp);
    printf("%d\n",n);
    for(int i=0;i<n;i++){
        printf("%s %d\n",stu[i].id,stu[i].score);
        }
    }
    return 0;
}