#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    
  
    int s=1,p=0,sc=-1;
    int w=0,l=0,d=0,flag=0;
    printf("stone=1 scissor=-1 paper=0 \n");
     for (int i = 0; i < 5; i++)
    {
      srand(time(0));
    int x=rand()%100;
      
    int i;
    printf("YOU : ");
    scanf("%d",&i);
      if(i<-1 || i>1 ){
        flag=1;
        printf(" invalid input ");
        break;
      }
    int a=0;
      printf("ANDROID : ");
      if(x>60){
    printf("stone\n");
    a=1;
    }
    else if(x<40){
       printf("paper\n");
        a=0;
    }
    else{
       printf("scissor\n");
        a=-1;
        }
    if(a==-1 && i==1 || a==0 && i==-1 || a==1 && i==0){
    w++;
    
    }
      else if(a==1 && i==-1 || a==0
        -1&& i==0 || a==0 && i==1){
        l++;
        }
    
    }
    if(w>l){
    printf("YOU WIN\n");
    
    }
      else if(flag==0){
        if(w==l){
printf("DRAW\n");
    }
    else{
         printf("BETTER LUCK NEXT TIME\n");
        
    }
    
}
    return 0;

}