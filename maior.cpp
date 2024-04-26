int main(){
int v[80],menor,i;
for(i=1;i<=80;i++){
    v[i]=i;
}
menor=v[1];
for(i=2;i<=80;i++){
    if(v[i]<menor){
        menor=v[i];
    }
}
for(i=1;i<=80;i++){
    if(v[i]==menor){
        printf('O menor elemento e: %d. Na posicao: %d.', v[i], i);
    }
}
return 0;
}
