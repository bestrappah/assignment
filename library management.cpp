//library managment control
//Author:Peter Paul Munyaka
//Reg No:CT101/G/24684/24
//Date:30/09/2024
#include <stdio.h>
#include <math.h>
int main (){
	int book_id;
	int due_date;
	int return_date;
	int overdue;
	int fine_rate;
	int fine_amount;
	
	printf("enter book_id:");
	scanf("%d",&book_id);
	
	printf("enter the due_date:");
	scanf("%d",&due_date);
	
	printf("enter the return_date:");
	scanf("%d",&return_date);
	

	
	overdue=(return_date-due_date);
		if (overdue<=7){fine_rate=20;}
		else if(overdue>=8 && overdue<=14){fine_rate=50;}
		else {fine_rate=100;}
		fine_amount=(fine_rate*overdue);
printf("..........FINE DETAILS......\n");		
printf("Book id is:%d\n" ,book_id);
printf("Due date is:%d\n" ,due_date);		
printf("Return date is:%d\n" ,return_date);	
printf("Overdue is:%d\n" ,overdue);
printf("Fine rate is:%d\n" ,fine_rate);
printf("The fine amount is:%d\n" ,fine_amount);
	
		return 0;
	}
	
	
	