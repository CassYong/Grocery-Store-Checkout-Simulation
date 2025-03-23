#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#define MaxSize 10
	
struct People
{	//used to represent a complete queue, include the access of the beginnig and end of the queue
	int data[MaxSize];
	int front,rear;
};

void InitQueue(struct People *p)
{	//initialize a new queue
	p->rear=p->front=0;
}

int DisplayQueue(struct People p)
{	//count how many people in the queue, and return the number counted
	int count=0;
   for(;p.front!=p.rear;)
   {
    p.front++;
    count++;
   } 
   return count;	//return number of people counted in the queue
}
int EnQueue(struct People *p)	
{	//enqueue a random number of people into the queue
	int a,i;
	
	a=rand()%10+1; //enqueue from 1 to 10 people
	
	for(i=0;i<a;i++)
	{	//enqueue element 1 into each index of array need to be enqueued
		p->data[p->rear+1]=1;
    	p->rear++;
	}
	return 1;
}

int DeQueue(struct People *p)		
{	//dequeue a random number of people from the queue
    int i,a;
    	a=rand()%2+1;	//dequeue from 1 to 2 people
	for(i=0;i<a;i++)
	{	//increase the index of array assigned to front, the increment is done one by one
		p->front++;
	}
	return a;	//return number of people dequeued
}
int shortline(int total[]) 
{	//to obtain the index of shortest queue, all queues are assigned to total [] array

	//use b to set the first line as shortest by default
	int b=total[0],index,i;
	for(i=0;i<5;i++)	//check all lines
	{	//switch b to the new shortest line if there is another shorter line
		if(b>=total[i])
		{
			b=total[i];
			index=i;	//keep the index of new shortest line
		}
	}	
	return index;	//return the index of shortest line
}
int enterandleave(struct People *p,struct People *p2,struct People *p3,struct People *p4,struct People *p5,int a)   
{	//simulate the process people enqueue or dequeue

	//1 to 5 enqueue, 6 to 10 dequeue
	switch(a)
	{
		case 1:	{
			p->data[p->rear+1]=1;
    		p->rear++;
    		return DisplayQueue(*p);
		
		}
		case 2:{
			p2->data[p2->rear+1]=1;
    		p2->rear++;
    		return DisplayQueue(*p2);
			
		}
		case 3:{
			p3->data[p3->rear+1]=1;
    		p3->rear++;
    		return DisplayQueue(*p3);
			
		}
		case 4:{
			p4->data[p4->rear+1]=1;
    		p4->rear++;
    		return DisplayQueue(*p4);
			
		}
		case 5:{
			p5->data[p5->rear+1]=1;
    		p5->rear++;
    		return DisplayQueue(*p5);
			
		}
		case 6:	{
			p->front++;
			break;
		}
		case 7:{
			p2->front++;
			break;
		}
		case 8:{
			p3->front++;
   			break;
		}
		case 9:{
			p4->front++;
			break;
		}
		case 10:{
			p5->front++;
			break;
		}
	}
}

int change(struct People *p,struct People *p2,struct People *p3,struct People *p4,struct People *p5,int a,int *you,int *one,int *two,int *three,int *four,int *five)
{	//changing line's condition after 5 minutes

	//one,two,three,four,five represent number of people in each line
	
	int n1,n2,n3,n4,n5;	//represent number of people dequeue
	switch(a)
		{	//case 1 to 5, represent queue1 to queue 5
		case 1:{
			n1=DeQueue(p);
			n2=DeQueue(p2);
			n3=DeQueue(p3);
			n4=DeQueue(p4);
			n5=DeQueue(p5);
			*you=*you-n1;
			if(*one>0)
			{
				*one=*one-n1;
			};
			if(*two>0)
			{
				*two=*two-n2;
			};
			if(*three>0)
			{
				*three=*three-n3;
			};
			if(*four>0)
			{
				*four=*four-n4;
			};
			if(*five>0)
			{
				*five=*five-n5;
			};
			if(*you<=1)
			{
				return 0;
			}
			else
			EnQueue(p);
			EnQueue(p2);
			EnQueue(p3);
			EnQueue(p4);
			EnQueue(p5);
			break;
		}
		case 2:{
			n1=DeQueue(p);
			n2=DeQueue(p2);
			n3=DeQueue(p3);
			n4=DeQueue(p4);
			n5=DeQueue(p5);
			*you=*you-n2;
			if(*one>0)
			{
				*one=*one-n1;
			};
			if(*two>0)
			{
				*two=*two-n2;
			};
			if(*three>0)
			{
				*three=*three-n3;
			};
			if(*four>0)
			{
				*four=*four-n4;
			};
			if(*five>0)
			{
				*five=*five-n5;
			};
			if(*you<=1)
			{
				return 0;
			}
			else
			EnQueue(p);
			EnQueue(p2);
			EnQueue(p3);
			EnQueue(p4);
			EnQueue(p5);
			break;
		}	
		case 3:{
			n1=DeQueue(p);
			n2=DeQueue(p2);
			n3=DeQueue(p3);
			n4=DeQueue(p4);
			n5=DeQueue(p5);
			*you=*you-n3;
			if(*one>0)
			{
				*one=*one-n1;
			};
			if(*two>0)
			{
				*two=*two-n2;
			};
			if(*three>0)
			{
				*three=*three-n3;
			};
			if(*four>0)
			{
				*four=*four-n4;
			};
			if(*five>0)
			{
				*five=*five-n5;
			};
			if(*you<=1)
			{
				return 0;
			}
			else
			EnQueue(p);
			EnQueue(p2);
			EnQueue(p3);
			EnQueue(p4);
			EnQueue(p5);
			break;
		}
		case 4:{
			n1=DeQueue(p);
			n2=DeQueue(p2);
			n3=DeQueue(p3);
			n4=DeQueue(p4);
			n5=DeQueue(p5);
			*you=*you-n4;
			if(*one>0)
			{
				*one=*one-n1;
			};
			if(*two>0)
			{
				*two=*two-n2;
			};
			if(*three>0)
			{
				*three=*three-n3;
			};
			if(*four>0)
			{
				*four=*four-n4;
			};
			if(*five>0)
			{
				*five=*five-n5;
			};
			if(*you<=1)
			{
				return 0;
			}
			else
			EnQueue(p);
			EnQueue(p2);
			EnQueue(p3);
			EnQueue(p4);
			EnQueue(p5);
			break;
		}
		case 5:{
			n1=DeQueue(p);
			n2=DeQueue(p2);
			n3=DeQueue(p3);
			n4=DeQueue(p4);
			n5=DeQueue(p5);
			*you=*you-n5;
			if(*one>0)
			{
				*one=*one-n1;
			};
			if(*two>0)
			{
				*two=*two-n2;
			};
			if(*three>0)
			{
				*three=*three-n3;
			};
			if(*four>0)
			{
				*four=*four-n4;
			};
			if(*five>0)
			{
				*five=*five-n5;
			};
			if(*you<=1)
			{
				return 0;
			}
			EnQueue(p);
			EnQueue(p2);
			EnQueue(p3);
			EnQueue(p4);
			EnQueue(p5);
			break;
		}
	}
}

void customer(struct People *p,struct People *p2,struct People *p3,struct People *p4,struct People *p5)
{	//display number of people waiting in each line
	int total[]={DisplayQueue(*p),DisplayQueue(*p2),DisplayQueue(*p3),DisplayQueue(*p4),DisplayQueue(*p5)};
	int num;
	for(num=1;num<6;num++) 
	printf("Line %d has %d customer waiting\n",num,total[num-1]);
}

void find(struct People *p,struct People *p2,struct People *p3,struct People *p4,struct People *p5,int *a,int *you)
{	//looking for shortest line
	//variable 'a' represent the current line number
	int total[]={DisplayQueue(*p),DisplayQueue(*p2),DisplayQueue(*p3),DisplayQueue(*p4),DisplayQueue(*p5)};
	if(shortline(total)+1!=*a)	//currently not at the shortest line
	{	//if other line is shorter
		if(total[shortline(total)]<*you-1)
		{
			*a=shortline(total)+1;
			printf("\nLine %d is shorter\n",*a);
			*you=enterandleave(p,p2,p3,p4,p5,*a);	//change to the shortest line
			enterandleave(p,p2,p3,p4,p5,*a+2);
			printf("Go to the shortest line\n",a);
			printf("You are now at line %d , your position is %d\n",*a,*you);
		}
		
		else
		{
			printf("\nNo shorter line\n");
		}				
	
	}
	else
	printf("\nNo shorter line\n");
}

int main()
{
	struct People p,p2,p3,p4,p5;
	int a=0,b,you,i,count=0,c[5],n,j,flag=0,one,two,three,four,five,f=0;
	srand((unsigned int)time(NULL));
	
	//Initialize the queues
	InitQueue(&p);
	InitQueue(&p2);
	InitQueue(&p3);
	InitQueue(&p4);
	InitQueue(&p5);
	
	//Enqueue people into the empty queues
	EnQueue(&p);
	EnQueue(&p2);
	EnQueue(&p3);
	EnQueue(&p4);
	EnQueue(&p5);
	
	printf("\t-------------------------------------------------\n");
	printf("\t|\tCASHEIR LINES AT GROCERY STORE\t\t|\n");
	printf("\t-------------------------------------------------\n\n");
	printf("PRESS < ENTER > KEY ONCE = PASS 5 MINUTES...\n\n");
	
	//total number of people in each line stored in total array
	int total[]={DisplayQueue(p),DisplayQueue(p2),DisplayQueue(p3),DisplayQueue(p4),DisplayQueue(p5)};
	int num;
	for(num=1;num<6;num++) 
	printf("Line %d has %d customer waiting\n",num,total[num-1]);
	printf("\n");
	
	//if all queues have more than 8 people, do not join any queue, leave
	if(total[0] >8 && total[1] >8 && total[2] >8 && total[3] >8 && total[4] >8){
		printf("\n\nAll lines have too much people, don't join any queue now'");
		exit(1);
	}
	
	for(i=0;i<5;i++)
	{	//check for multiple shortest line
		if(total[i]==total[shortline(total)])
		{
			c[count]=i;	
			count++;
		}
	}
	if(count!=1)
	{	//have more than 1 shortest line
		a=c[0]+1;
		printf("%d lines have the same length, randomly pick a line, which is line %d\n",count,a);
		you=enterandleave(&p,&p2,&p3,&p4,&p5,a);
		printf("You are at line %d, your position is %d\n",a,you);
	}
	else 
	{	//have only one shortest line
		a=shortline(total)+1;
		printf("You are in the shortest line now, which is line %d\n",shortline(total)+1);
		you=enterandleave(&p,&p2,&p3,&p4,&p5,shortline(total)+1);
		printf("You are in line %d, your position is %d",a,you);
	}
	for(i=0;i<6;i++)
	{	
		getchar(); 
		if(change(&p,&p2,&p3,&p4,&p5,a,&you,&one,&two,&three,&four,&five)==0)
		{	//change() return 0 only if you are the first in the line
			printf("You have done your payment\n");
			return 0;
		}
		if(i==5)	
		{	//waited 30 minutes
			if(you>3) //have at least 3 people before you
			{
				printf("You have waited %d min, you leave now\n",5*(i+1));
				printf("You are in line %d, your position is %d",a,you);	
				return 0;	
			}
			else{	//less than 3 people before you
			printf("You have waited %d min, wait for a while\n",5*(i+1));
			printf("You are in line %d, your position is %d",a,you);
			}
			
			if(change(&p,&p2,&p3,&p4,&p5,a,&you,&one,&two,&three,&four,&five)==0)
			{	//change() return 0 only if you are the first in the line
			printf("You have done your payment\n");
			return 0;
			}
			else{
			printf("You have waited for %d min, you leave\n",5*(i+2));
			printf("You are in line %d, your position is %d",a,you);
			}
		}
		
		printf("\nwaited for %d min\n",5*(i+1));
		printf("You are at line %d, your position is %d\n\n",a,you);
		
		printf("Enter < 1 > to check if got shorter line.\n");
		int t=1;
		while(t)
		{
			scanf("%d",&n);
			switch(n)
			{
				case 1:{
					customer(&p,&p2,&p3,&p4,&p5);
					find(&p,&p2,&p3,&p4,&p5,&a,&you);
					t=0;
					break;
				}	
				
				default:{
					printf("Error. Please key < 1 >\n"); 
					break;
				}
			}
		}
		getchar();
		
	}
}
