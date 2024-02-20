#include<stdio.h>

struct Task {
	char* task_description;
};

typedef struct Task Task;

Task create_task(char* desc) {
	Task t1;
	t1.task_description = desc;
	return t1;
}

int main() {
	printf("%s\n", create_task("First task").task_description);
	char *a; // contans garbage
	printf("%s\n", a);
	return -1;

}
