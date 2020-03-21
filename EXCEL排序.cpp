//对每个测试用例，首先输出1行“Case i:”，其中 i 是测试用例的编号（从1开始）。
//随后在 N 行中输出按要求排序后的结果，即：当 C=1 时，按学号递增排序；
//当 C=2时，按姓名的非递减字典序排序；当 C=3 时，按成绩的非递减排序。
//当若干学生具有相同姓名或者相同成绩时，则按他们的学号递增排序。
//Case i是测试用例的编号

#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
struct Student{
    int id;
    char name[10];
    int score; 
}stu[100010];
bool cmp1(Student a,Student b){
    return a.id<b.id;
}
bool cmp2(Student a,Student b){
    if(strcmp(a.name,b.name)!=0){//注意使用strcmp比较两字符串作为if的判断条件！直接使用a.name!=b.name会出错！
        return strcmp(a.name,b.name)<0;
    }
    else{
         return a.id<b.id;
    }
}
bool cmp3(Student a,Student b){
if (a.score!=b.score){
  return a.score<b.score;  
}
else{
  return a.id<b.id;
}
}
int main(){
int n,c;
int num=0;
while(scanf("%d%d",&n,&c)&&n!=0){
    
    for(int i=0;i<n;i++){
        scanf("%d%s%d",&stu[i].id,stu[i].name,&stu[i].score);
    }
    if(c==1) sort(stu,stu+n,cmp1);
    else if(c==2) sort(stu,stu+n,cmp2);
    else if(c==3) sort(stu,stu+n,cmp3);
      num++;
		printf("Case %d:\n", num);
    for(int i=0;i<n;i++){
        
        printf("%06d %s %d\n",stu[i].id,stu[i].name,stu[i].score);
    }
}
return 0;
}