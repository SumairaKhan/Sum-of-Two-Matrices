#include<stdio.h>
int main()
{
        int a[3][3],b[3][3],c[3][3],i,j;
        printf("Enter the value of First 3 x 3 Matrix : ");
        for(i=0;i<3;i++)
            {
                 for(j=0;j<3;j++)
                     {  
                         scanf("%d",&a[i][j]);
                      }
            }
                 printf("Enter the value of Second 3 x 3 Matrix : ");
                 for(i=0;i<3;i++)
                     {
                        for(j=0;j<3;j++)
                           { 
                               scanf("%d",&b[i][j]);
                           }
                      }
                               for(i=0;i<3;i++)
                                   {
                                      for(j=0;j<3;j++)
                                         {
                                            c[i][j]=a[i][j]+b[i][j];
                                            printf("Sum of Two Matrix : %d\n",c[i][j]);
                                         }
                                   }

}
