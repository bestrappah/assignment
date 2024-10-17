//c arrays 3-D arrays
//Author:Peter Paul Munyaka
//Reg No:CT101/G/24684/24
//Date:6/10/2024
#include<stdio.h>
int main() {
	int i,j,k;
	int marks [2][2][3] ={{40,50,60},{80,30,92}};
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      for(k=0;k<3;k++){
   printf("marks[%d][%d][%d]=%d \n",i,j,k,marks[i][j][k]);}
      }
}
	return 0;
}