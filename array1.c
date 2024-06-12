#include<stdio.h>
#include<stdlib.h>
struct arr1{
    int total_size;
    int used_size;
    int *ptr;

};
void createarr1(struct arr1*a,int tsize, int usize){
    (*a).total_size=tsize;
    (*a).used_size=usize;
    (*a).ptr=(int*)malloc(tsize*sizeof(int));
}
void setval(struct arr1*a){
    int n;
    for(int i=0;i<(*a).used_size;i++){
        printf("Enter elemnt:");
        scanf("%d", &n);
        (*a).ptr[i]=n;

    }
}
void show(struct arr1*a){
    for(int i=0;i<(*a).used_size;i++){
        printf("%d\n", (*a).ptr[i]);

    }
}
int main(){
    struct arr1 marks;
    createarr1(&marks, 10, 2);
    printf("setval\n");
    setval(&marks);
    printf("show\n");
    show(&marks);
    return 0;
}
