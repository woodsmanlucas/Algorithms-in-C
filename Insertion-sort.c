 #include <stdio.h>

static int array[10]  = {2, 1, 3, 5, 4, 6, 7, 8, 10, 9};

 void swap(int *pa, int *pb){
    int t = *pa;
    *pa = *pb;
    *pb = t;
    printf("swap: a = %d, b = %d\n", *pa, *pb);
    return;
}

 void insert(int j){
    for(int i = j-1; i >= 0; i--){
        if(array[i] > array[i+1]){
            swap(&array[i], &array[i+1]);
        }else{
            break;
        }
    }
 }

int main(void){
    for(int j = 1; j < 10; j++){
        insert(j);
    }

    for(int i = 0; i < 10; i++){
        printf("%d, ", array[i]);
    }
    printf("\n");
    return 0;
}