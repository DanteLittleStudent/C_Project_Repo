#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int check(int row, int column);
void output();
void solve(int row);

int m[8][8] = {0};
int num = 0;
 
int check(int row,int column){
	int i,j;
    if(row==1){
		return TRUE;
	}
    for(i=0;i<=row-2;i++){
        if(m[i][column-1]==1){
			return FALSE;
		}
    }
    i = row-2;
    j = i-(row-column);
    while(i>=0&&j>=0){
        if(m[i][j]==1){
		return FALSE;
		}
        i--;
        j--;
    }
    i = row-2;
    j = row+column-i-2;
    while(i>=0&&j<=7){
        if(m[i][j]==1){
		return FALSE;
		}
        i--;
        j++;
    }
    return TRUE;
}

void output(){
    int i,j;
    num++;
    printf("answer %d:\n",num);
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
			printf("%d ",m[i][j]);
		}
        printf("\n");
    }
}
  
void solve(int row){
    int j;
    for (j=0;j<8;j++){
        m[row-1][j] = 1;
        if (check(row,j+1)==TRUE){
            if(row==8){ 
				output();
			}
            else solve(row+1);
        }
        m[row-1][j] = 0;
    }
}
  
int main(){
    solve(1);
    return 0;
}