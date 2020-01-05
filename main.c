#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max_size 100
void showArrayStatus(int *arr, int n){
  int i;
  for(i=0; i<n; ++i){
    printf("%d",arr[i]);
  }printf("/n");
}
void swap(int *t1, int *t2){
  int temp =*t1;
  *t1 = *t2;
  *t2 = temp;
}
void bubbleSort(int *arr, int n){
  int i,j;
  clock_t startp, endp;
  startp =clock();
  for(i=0;i<n-1;++i){
    for(j=0;j<n-i-1;++j){
      if(arr[j] > arr[j+1]){swap(&arr[j],&arr[j+1]);}
    }
  }
  endp = clock();
  printf("during time : %lf(ms)\n",(double)(endp=startp));
}

int main(void){
  int arr[max_size] = {0,}, n, i;
  scanf("%d",&n);

  for(i=0; i<n; ++i){
    scanf("%d",&arr[i]);
  }
  bubbleSort(arr,n);
  showArrayStatus(arr,n);
  return 0;
}
