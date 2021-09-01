#include <stdio.h>
#include <string.h>
int main()
{   
  int L1=1,L2=1,R1=1,R2=1,l1,l2,r1,r2;
  char m1,m2,str1[3],str2[3];
  
  printf("current status: \n Player 1: \n L R \n %d %d", L1, R1);
  printf("Player 2: \n L R \n %d %d ", L2, R2);
  
  while((L1+R1!=0)&&(L2+R2!=0))
  {
    printf("\n player 1 move:");
    scanf(" %c", &m1);
    
    
    if((m1=='A')||(m1=='a'))
    {
      printf("Enter the move combination:");
      scanf("%s", str1);
      
       if(strcmp(str1,"LR")==0)
      {
        R2=R2+L1;
        if(R2>=5)
        R2=0;
      }
      else if(strcmp(str1,"RR")==0)
      {
        R2=R2+R1;
        if(R2>=5)
        R2=0;
      }
      else if(strcmp(str1 ,"RL")==0)
      {
        L2=L2+R1;
        if(L2>=5)
        L2=0;
      }
      else if(strcmp(str1,"LL")==0)
      {
        L2=L2+L1;
        if(L2>=5)
        L2=0;
      }
      
      printf(" Player 1: \n L R \n %d %d", L1, R1);
  	  printf("\n Player 2: \n L R \n %d %d ", L2, R2);
    }
    else if ((m1=='S')||(m1=='s'))
    {
      printf("Enter the combination:");
      scanf("%d %d",&l1,&r1);
      
	  L1=l1;
	  R1=r1;  
	  if(L1>=5)
	    L1=0;
	  else if(R1>=5)
	  	R1=0;    
	  
	  printf("Player 1: \n L R \n %d %d", L1, R1);
  	  printf("\n Player 2: \n L R \n %d %d ", L2, R2);
    }
    else 
    {
    	continue;
	}
    
    if((L1+R1==0)||(L2+R2==0))
    {
    	break;
	}
    printf("\n Player 2 move:");
     scanf(" %c", &m2);
     
    
    if((m2=='A')||(m2=='a'))
    {
      printf("Enter the move combination:");
      scanf("%s", str2);
      
       if(strcmp(str2,"LR")==0)
      {
        R1=R1+L2;
        if(R1>=5)
        R1=0;
      }
      else if(strcmp(str2,"RR")==0)
      {
        R1=R1+R2;
        if(R1>=5)
        R1=0;
      }
      else if(strcmp(str2 ,"RL")==0)
      {
        L1=L1+R2;
        if(L1>=5)
        L1=0;
      }
      else if(strcmp(str2,"LL")==0)
      {
        L1=L1+L2;
        if(L1>=5)
        L1=0;
      }
      
      
      printf("Player 1: \n L R \n %d %d", L1, R1);
  	  printf("\n Player 2: \n L R \n %d %d ", L2, R2);
    }
    else if ((m1=='S')||(m1=='s'))
    {
      printf("Enter the combination:");
      scanf("%d %d",&l2,&r2);
      
	  L2=l2;
	  R2=r2;   
	  if(L2>=5)
	    L2=0;
	  else if(R2>=5)
		R2=0;
		
	  
	  printf("current status: \n Player 1: \n L R \n %d %d", L1, R1);
  	  printf("\n Player 2: \n L R \n %d %d ", L2, R2);
    }
    else
	{
		continue;
    }
  } 
  if(L1!=0)
  {
  	printf("\n player1 wins!");
  }
  else
  {
  	printf("\n player2 wins!");
  }
  
  return 0;
}
