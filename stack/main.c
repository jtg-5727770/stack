#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_STACK_SIZE 10 // ������ �ִ� ũ��

typedef int element; // �������� �ڷ���
element stack[MAX_STACK_SIZE]; // 1���� �迭
int top = -1;

// ���� ���� ���� �Լ�
int is_empty()
{
	return (top == -1);
}
// ��ȭ ���� ���� �Լ�
int is_full()
{
	return (top == (MAX_STACK_SIZE - 1));
}
// ���� �Լ�
void push(element item) 
{
	if (is_full()) {
		fprintf(stderr, "���� ��ȭ ����\n");
		return; 
	}
	else stack[++top] = item; 
}
// ���� �Լ�
element pop()
{
	if (is_empty()) {
		fprintf(stderr, "���� ���� ����\n");
		return;
	}
	else return stack[top--];
}

int main() {

	srand(time(NULL));
	for (int i = 1; i <= 30; i++) {
		int rand_num = rand() % 100 + 1;

		if (rand_num % 2 == 0) {
			push(rand_num);
			
			printf("push %d\n", rand_num);
		}
		else{
			printf("pop %d\n", stack[top]);
			pop();
		
			
		}
	}
	system("pause");
	return 0;
}