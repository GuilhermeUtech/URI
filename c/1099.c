#include<stdio.h>

int main(){
    int n,i=0,a,b,sum=0,c=0;
    scanf("%d", &n);
    
    while(c<n){
               scanf("%d%d", &a, &b);
                             if(a==b){ 
                                      printf("0\n");
                                      c++;
                                      }
                                       else if(a<b){
                                     for(i=a+1; i<b; i++){
                                              if(i%2==1||i%2==-1){
                                                   sum = sum + i;
                                                   
                                                   }
                                                   
                                              }
                                              c++;
                                              printf("%d\n", sum);
                                     } else {
                                     for(i=b+1; i<a; i++){
                                              if(i%2==1||i%2==-1){
                                                   sum = sum + i;
                                                   }
                                              }
                                              c++;
                                              printf("%d\n", sum);
                                     }
                                     sum = 0;
               }
    
    return 0;
    }
