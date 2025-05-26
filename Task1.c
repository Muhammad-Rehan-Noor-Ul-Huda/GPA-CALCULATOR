#include<stdio.h>
int fun1(int a,int b,int arr[a][b] ){
    int abb[a];
    for(int i=0;i<a;i++){
        abb[i]=0;
    }
   for(int i=0;i<a;i++){
 for(int j=0;j<b;j++){
 if(arr[i][j]==1){
    abb[i]=abb[i]+1;
 }
 }
   }
    int c=abb[0];
   
  for(int i=0;i<a;i++){
    if(abb[i]>c){
        c=i;
    }
  }
  printf("%d row has greatest no of ones\n",c);
  return 0;
}
int fun2(int a,int b,int arr[a][b]){
    int abb[b];
    for(int i=0;i<b;i++){
        abb[i]=0;
    }
   for(int i=0;i<a;i++){
 for(int j=0;j<b;j++){
 if(arr[j][i]==1){
    abb[j]=abb[j]+1;
 }
 }
   }
    int c=abb[0];
   
  for(int i=1;i<b;i++){
    if(abb[i]>=c){
        c=i;
    }
  }
  printf("%d column has greatest no of ones",c);
  return 0;
}
int main(){
    int a;
    int b;
    printf("Enter numbers of rows:");
    scanf("%d",&a);
     printf("Enter numbers of columns:");
    scanf("%d",&b);
    int arr[a][b];
     for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    fun1(a,b,arr);
     fun2(a,b,arr);
    return 0;
}