#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 4;

typedef struct{
int count;
int front;
int rear;
int item [MAXQUEUE];
} QUEUE;
QUEUE antrean;

void inisialisasi(QUEUE *Q){
Q->count=0;
Q->front=0;
Q->rear=0;
}

int isEmpty(QUEUE *Q){
int hasil=0;
if (Q->count==0){
hasil=1;
}
return hasil;
}

int isFull(QUEUE *Q){
int hasil=0;
if (Q->count==MAXQUEUE){
hasil=1;
}
return hasil;
}

void insert(QUEUE *Q, int data){
    if(Q->count==MAXQUEUE){
        printf("Antrian penuh \n");
    } else {
        Q->data[Q->rear]=data;
        Q->rear=[Q->rear+1]%MAXQUEUE;
        ++(Q->count);

    }
}

void hapus(QUEUE *Q, int *datanya){
    if(Q->count==NULL){
        printf("Tidak ada antrian \n");
    } else {
        *datanya=q->data[q->front];
        q->front=(q->front+1)%MAXQUEUE;
        --(q->count);
    }
}

void printQueue(QUEUE *Q){
    if(isEmpty(Q)){
        printf("Antrian Kosong \n");
    }
    else {
        printf("Isi antrean : ");
        for(i = 0; i < Q->count; i++){
            printf("%d ", Q->item[(Q->front + i) % MAXQUEUE]);
        }
        printf("\n");
    }
}


int main(){
inisialisasi(&antrean);
printf("Masukan 108 \n");
insert(108, &antrean);
printQueue("%d", antrean);
ptintf("Masukan 109 \n");
insert(109, &antrean);
printQueue("%d", antrean);
printf("Masukan 110 \n");
insert(110, &antrean);
printQueue("%d", antrean);
printf("Masukan 111 \n");
insert(111, &antrean);
printQueue("%d", antrean);
printf("Menghapus 108 dari antrean")
hapus();
printQueue("%d", antrean);
printf("Masukan 112");
insert(112, antrean);
printQueue("%d", antrean);

return 0;
}