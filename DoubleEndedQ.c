#include<stdio.h>
#include<stdlib.h>

#define MAX 5
int queue[MAX];

void insert_left(int x)
{
	if(left==(right+1)%MAX) //full
	{
		printf("Full\n");
		return ;
	}
	if(left==-1) //empty
	{
		left++;
		right++;
		queue[left]=x;
	}
	else
	{
		if(left==0)
		{
			left=MAX-1;
			queue[left]=x;
		}
		else
		{
			left--;
			queue[left]=x;
		}
	}
}

void delete_left()
{
	if(left==-1)
	{
		printf("Empty\n");
		return ;
	if(left==right) //last element in q
	{
		left=-1;
		right=-1;
	}
	else
	{
		left=(left+1)%MAX;
	}
}

void insert_right(int x)
{
	if(left==(right+1)%MAX) //full
	{
		printf("Full\n");
		return ;
	}
	if(right==-1) //empty
	{
		left++;
		right++;
		queue[right]=x;
	}
	else
	{
		right=(right+1)%MAX;
		queue[right]=x;
	}
}

void delete_right()
{
	if(right==-1)
	{
		printf("Empty\n");
		return ;
	if(left==right)
	{
		left=-1;
		right=-1;
	}
	else
	{
		if(right==0)
			right=MAX-1;
		else
			right--;
	}
}

void display()
{
	if(left==-1) printf("Empty\n");
	else
	{
		for(int i=left;i!=right;i=(i+1)%MAX)
		{
			printf("%d",queue[i]);
		}
		printf("%d",queue[right]);
	}
}