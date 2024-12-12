#include <stdio.h>


int main(){
    // int myArray[10] ;

    
    // myArray[5] = 5;
    // for(int i = 0; i<10; i++){
    //     printf("%d\n",myArray[i]);
    // }


    int multiArray[3][4]= {{1,2,3,11},{4,5,6,12},{7,8,9,13}};

    for(int i = 0;i<3; i++){
        for(int j = 0;j<4; j++){
            if (j ==3){
                printf("%d",multiArray[i][j]);
            }else{
            printf("%d,",multiArray[i][j]);
        }
        }
        
        printf("\n");
    }
    

    return 0;
}