//字符串由A~Z大写字母构成的情况，对应26进制转换为十进制
int hashFunc_26(char S[],int len){//将字符串S转换为整数
    int id=0;
    for(int i=0;i<len;i++){
        id=id*26+(S[i]-'A');//26进制转换为10进制
    }
    return 0;
}
//如包含大写字母和小写字母，采用52进制
int hashFunc_52(char S[],int len){
    int id=0;
    for(int i=0;i<len;i++){
        if(S[i]>='A'&&S[i]<='Z'){
            id=id*52+(S[i]-'A');
        }
        else if(S[i]>='a'&&S[i]<='z'){
            id=id*52+(S[i]-'a')+26;
        }
    }
    return 0;
}