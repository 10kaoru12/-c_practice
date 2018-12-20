#include <stdio.h>

int main(void) {
	int i;
	char str[200000]={0};
	int str_size=0;
	scanf("%s",str);
	for(i=0;i<200000;i++){
		if ((str[i]=='W')||(str[i]=='B')){
			str_size++;
		}
		else if (str[i]==0){
			break;
		}
	}
	char array[str_size];
	for(i=0;i<str_size;i++){
		array[i]=str[i];
	}
	int result=0;
	for(i=0;i<str_size;i++){
		if (array[i]=='B'){
			for(int j=i;j<str_size;j++){
				if (array[j]=='W'){
					result++;
				}
			}
		}
	}
	printf("%d",result);
	return 0;
}