#include <stdio.h>
int main(){
	int ngay,thang,nam;
	printf("nhap ngay:");
	scanf("%d", &ngay);
	printf("nhap thang:");
	scanf("%d", &thang);
	printf("nhap nam:");
	scanf("%d", &nam);
	if((ngay>=1)&&(ngay<=31)) printf("\nngay hop le");
	else printf("\nkhong hop le");
	if((thang>=1)&&(thang<=12)) printf("\nthang hop le");
	else printf("\nkhong hop le");
	if(nam<=2024) printf("\nnam hop le");
	else printf("\nkhong hop le");
	printf("\nNgay %d", ngay);
	printf(" Thang %d", thang);
	printf(" Nam %d", nam);
	return 0;
}