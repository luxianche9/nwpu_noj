/*VOL大学生乒乓球比赛*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(void)
{
	char a, b, c;
	for (c = 'X'; c <= 'Z'; c++) {
		//从c开始判断
		if (c != 'X' && c != 'Z') {
			for (a = 'X'; a <= 'Z'; a++) {
				if (a != c && a != 'X') {
					//a和c的对手不重复
					for (b = 'X'; b <= 'Z'; b++) {
						//b和a，c的对手均不重复
						if (b != a && b != c) {
							printf("A=%c\nB=%c\nC=%c\n", a, b, c);
						}
					}
				}
			}
		}
	}
	return 0;
}