#include <stdio.h>


int summation(int myvar1,int myvar2);
int summationWhile(int myvar);
int summationFor(int myVar);
int summationRecursive(int myVar);
char charSum(char myVar);
int main(){


    int a = summationRecursive(4);
        printf("%d\n", a);

    return 0;

}


int summation(int myvar1,int myvar2){
    int result = myvar1 + myvar2;

    return result;


}

int summationWhile(int myvar){
    int result = 0;
    while(myvar > 0){
        result = result + myvar;
        myvar --;

    }
    return result;
}

int summationFor(int myVar){
    int result = 0;
    for(int i = 1; i<=myVar;i++){
        result = result + i;
    }
    return result;
}

int summationRecursive(int myVar){
    if(myVar == 0){
        return 0;
    }

    return myVar + summationRecursive(myVar-1);
}






