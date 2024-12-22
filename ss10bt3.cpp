#include<stdio.h >
int main(){
	int array[]={31,0,7,2,6};
	int size=sizeof(array)/sizeof(array[0]),minIndex,temp=0;
	for(int i=0;i<size-1;i++){
		minIndex=i;
		for(int j=i+1;j<size;j++){
			if(array[j]<array[minIndex]){
				minIndex=j;
			}
		}
		temp=array[minIndex];
		array[minIndex]=array[i];
		array[i]=temp;
	}
	for(int i=0;i<size;i++){
		printf("%d",array[i]);
	}
	return 0;
}
