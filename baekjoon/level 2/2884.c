// [2884] Alarm
#include<stdio.h>
int main(void)
{
	int hr, min;
	scanf("%d %d", &hr, &min);
	if (min < 45) {
		switch (hr) {
			case 0: 
				printf("%d %d", hr + 23, min + 15); break;
			default: 
				printf("%d %d", hr - 1, min + 15); break; 
		} 
	}
	else 
		printf("%d %d", hr, min - 45);
}