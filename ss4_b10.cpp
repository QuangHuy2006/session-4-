#include <stdio.h>
	int number(int a[]){
		printf("nhap cac phan tu co trong mang:");
		for(int i=0;i<3;i++){
			scanf("%d", &a[i]);
		}
	}
	int main(){
		int a[100];
		number(a);
		int temp;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(a[j]>a[j+1]){
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		printf("ham sau khi dc sap xep la:\n");
		for(int i=0;i<3;i++){
			printf("%d ", a[i]);
		}
		return 0;
	}