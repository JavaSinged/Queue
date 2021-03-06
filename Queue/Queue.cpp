// Queue.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#define MAX 10

int QUEUE[MAX] = { 0, };
int front = 0;
int rear = -1;

bool ADD(int value) {
	if (rear >= MAX - 1) {
		printf("큐 오버플로\n");
		return false;
	}
	rear++;
	QUEUE[rear] = value;
	printf("ADD : %d\n", value);
	return true;
}

bool DELETE(){
	int value;
	if (front > rear) {
		printf("큐 언더플로\n");
		return false;
	}
	value = QUEUE[front];
	front++;

	printf("DELETE : %d\n", value);

	return true;
}

void PRINTQ() {
	printf("큐(front : %d : rear : %d)\n", front, rear);
	for (int i = 0; i < MAX; i++) {
		printf("%d", QUEUE[i]);
	}
	printf("\n");
}
int main()
{
	ADD(10);
	ADD(20);
	ADD(30);
	ADD(40);

	PRINTQ();
	ADD(50);

	PRINTQ();
	DELETE();
	PRINTQ();

    return 0;
}

