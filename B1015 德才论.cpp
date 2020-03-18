/*注意审题，留意每一个“不低于”*/
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
struct Student{
    int id,de,cai;
};
using Stu = struct Student*;
Stu CreatStu(int id,int de,int cai){
    Stu S = new Student;
    S->id = id;
    S->de = de;
    S->cai = cai;
    return S;
}
bool cmp(Stu a,Stu b){
    if((a->de+a->cai)!=(b->de+b->cai)){
        return (a->de+a->cai) > (b->de+b->cai);
    }
    else{
        if(a->de!=b->de){
            return a->de > b->de;
        }
        else{
            return a->id < b->id;
        }
    }
}
int main(){
    int N , L , H;
    scanf("%d%d%d",&N,&L,&H);
    vector<Stu> Dcjb;
    vector<Stu> Dsc;
    vector<Stu> Dcjw;
    vector <Stu> Qualified;
    int id_,de_,cai_;
    int count = 0;
    for(int i = 0;i<N;i++){
        scanf("%d%d%d",&id_,&de_,&cai_);
        if(de_>=L&&cai_>=L){
            count++;
            if(de_ >= H&&cai_ >= H) Dcjb.push_back(CreatStu(id_,de_,cai_));
            else if(de_ >= H&&cai_ < H) Dsc.push_back(CreatStu(id_,de_,cai_));
            else if((de_<H&&cai_<H)&&de_>=cai_) Dcjw.push_back(CreatStu(id_,de_,cai_));
            else Qualified.push_back(CreatStu(id_,de_,cai_)); 
        }
    }
    sort(Dcjb.begin(),Dcjb.end(),cmp);
    sort(Dsc.begin(),Dsc.end(),cmp);
    sort(Dcjw.begin(),Dcjw.end(),cmp);
    sort(Qualified.begin(),Qualified.end(),cmp);

    printf("%d\n",count);
    for(int i = 0;i<Dcjb.size();i++)
        printf("%d %d %d\n",Dcjb[i]->id,Dcjb[i]->de,Dcjb[i]->cai);
    for(int i =0;i<Dsc.size();i++)
        printf("%d %d %d\n",Dsc[i]->id,Dsc[i]->de,Dsc[i]->cai);
    for(int i = 0;i<Dcjw.size();i++)
        printf("%d %d %d\n",Dcjw[i]->id,Dcjw[i]->de,Dcjw[i]->cai);
    for(int i = 0;i<Qualified.size();i++)
        printf("%d %d %d\n",Qualified[i]->id,Qualified[i]->de,Qualified[i]->cai);
    return 0;
}