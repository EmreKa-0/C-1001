#include  <stdio.h>



void append(int array[],int size,int element){
    size = array[size];  
    printf("%d ",array[element]);
}
void sum(int num1,int num2){
    int s = 0;
    for(int i = num1; i<=num2;i++){
        s = s + i;
    }
    printf("%d ",s);

}
void printsq(int number1, int number2) {

    

    for (int i=0;i*i<number2;i++){
        if (i*i>= number1)
        {
            
        printf("%d",i*i);
    }
}
}

int main(){
    //  int myArray[10] = {1,2,3,4,5,6,7,8,9,10};

    //  for(int i = 0 ; i < 10;i++){
    //      printf("%d\n",myArray[i]);
    // };
    
    // int multiArray[3][3] = {
    //                         {1,2,3},
    //                         {4,5,6},
    //                         {7,8,9},
                            
    // };
    // for(int i = 0;i<3;i++){
    //     for(int j = 0;j<3;j++ ){
    //         printf("%d, ", multiArray[i][j]);
    //     }
    // }

    // int number1,number2;
    // printf("Give a number :");
    // scanf("%d",&number1);
    // printf("Give an another number :");
    // scanf("%d",&number2);

    // printsq(number1,number2);

    //  int num1,num2;
    //  printf("Give a number:");
    //  scanf("%d",&num1);
    //  printf("Give an another number:");
    //  scanf("%d",&num2);

    //  sum(num1,num2);
    int size;
    int arr[] = {};
    int element;
    printf("Give a size of array :");
    scanf("%d",&size);
    printf("Give an element of array :");
    scanf("%d ",&element);

    append(arr,size,element);

    return 0;

}