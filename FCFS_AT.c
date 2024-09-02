#include<stdio.h>
void main()
{
    int i,n,bt[10],wt[10],tat[10],twt=0,ttat=0,at[10];
    float awt,atat;
    printf("\nEnter the number of processes: ");
    scanf("%d",&n); 
    for(i=0;i<n;i++)
    {
        printf("\nEnter the burst time of process-%d:",i+1);
        scanf("%d",&bt[i]);
        printf("\nEnter the arrival time of process-%d:",i+1);
        scanf("%d",&at[i]);
    }
      wt[0]=0;
      tat[0]=bt[0]+wt[0];
      for(i=1;i<n;i++)
      {
        wt[i]=bt[i-1]+wt[i-1];
        tat[i]=bt[i]+wt[i];
      }
      for(i=0;i<n;i++)
      {
         twt+=wt[i];
         ttat+=tat[i];
      }
      printf("\n _______________________");
      printf("\n|pid|\t|bt|\t|wt|\t|tat|");
      printf("\n_______________________________");
      for(i=0;i<n;i++)
      {
        printf("\n|%d|\t|%d|\t|%d|\t|%d|",i+1,bt[i],wt[i],tat[i]);
        printf("\n_______________________________");
      }
      awt=(float)twt/n;
      atat=(float)ttat/n;
      printf("\n Average waiting time=%4.2f",awt);
      printf("\nAverage turn around time:%4.2f",atat);
}Some change
