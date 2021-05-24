#include <stdio.h>

int main(){
	printf("Overnight 7$");
	printf("\nThree-day 5$");
	printf("\nWeekly 3$");
	int over;
	int three;
	int week;
	printf("\nSo dem da muon la %d", over);scanf("%d", &over);
	printf("\nSo lan 3 ngay da muon la %d", three);scanf("%d", &three);
	printf("\nSo lan muon hang tuan la %d", week);scanf("%d", &week);
	printf("Tong chi phi thue = %d", over * 7 + three * 5 + week * 3);
}
