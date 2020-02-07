#include <iostream>
#include <vector>
#include <string>
using Peo=struct People*;
using namespace std;
struct People{
string name;
int Y;
int M;
int D;
int ADays;
};
Peo CreatPeople(string name,int Y,int M,int D){
    Peo P=new People;
    P->name=name;
    P->Y=Y;
    P->M=M;
    P->D=D;
    P->ADays=735386-365*Y+30*M+D;
}

int main(){
    int N;
    cin>>N;
    vector <Peo> Peoples;
    for(int i=0;i<N;i++){
        string name;
        int Y,M,D;
        cin>>name>>Y>>>>M>>>>D;
        int Days=365*Y+30*M+D;
if(Days>662386&&Days<=735386){
    Peoples.push_back(CreatPeople(name,Y,M,D));
}

    }

    int max=-1,min=201;
    for(int i=0;i<Peoples.size();i++){
        if(Peoples[i]->ADays>max) max=Peoples[i]->ADays;
        if(Peoples[i]->ADays<min) min=Peoples[i]->ADays;
    }

    cout<<Peoples.size()<<' ';
    string oldest,youngest;
    for(int i=0;i<Peoples.size();i++){
        if(Peoples[i]->ADays==max) oldest=Peoples[i]->name;
        if(Peoples[i]->ADays==min) youngest=Peoples[i]->name;

    }
    cout<<oldest<<' '<<youngest;
}