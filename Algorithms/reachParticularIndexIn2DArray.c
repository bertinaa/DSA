#include<stdio.h> 
int main()
{
    int row,col; 
    scanf("%d %d",&row,&col); //3 3 
    int mat[row+1][col+1];  
    int i,j; 
    for(i=0;i<=row;i++)
    {
        for(j=0;j<=col;j++)
        {
            if(i==0||j==0)
            {
                mat[i][j]=1;
            }
            else 
            {
                mat[i][j]=mat[i-1][j]+mat[i][j-1];
            }
        }
    }
    printf("%d ",mat[row][col]);
}
