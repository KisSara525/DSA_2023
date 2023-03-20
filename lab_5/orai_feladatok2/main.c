#include <stdio.h>
#include <queue.h>

int main() {
    Queue queue ;
    bool ok = true;
    createQueue(5,&queue); //cim szerint adjuk at hogy majd erzekelje a valtozasokat
    while(ok){
        int option;
        printf("Choose from the following:"
               "\n\t - 1. isFull?"
               "\n\t - 2. isEmty?"
               "\n\t - 3. New car arrived(enqueue)"
               "\n\t - 4. Remove car(dequeue)"
               "\n\t - 5. Display all data"
               "\n\t - 0. Exit");
        printf("Ypure option:");
        scanf("%d",&option);
        switch (option) {
            case 0:
                printf("the end");
                ok = false;
                break;
            case 1:
                printf("The queue is full: %d\n",(isFull(queue)?("yes"):("no")));
                break;
            case 2:
                printf("The queue is emty: %d\n",(isEmpty(queue)?("yes"):("no")));
                break;
            case 3:
                printf("New car arrived, give valid plate number:");
                char carPlate[CAR_PLATE_NUMBER_LIMIT];
                scanf("%s",carPlate);
                enqueue(&queue,carPlate);
                break;
            case 4: {
                char *result = dequeue(&queue);
                printf("The removed car is:%s\n",result);
                break;
            }
            case 5:
                display(queue);
                break;
            default:
                printf("Invalid option\n");
        }
    }

    dequeue(&queue);

    return 0;
}
