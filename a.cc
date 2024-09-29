#include <iostream>
#include <cstring>

int main(){
    char shit[100]="";
    printf(">");
    scanf("%s",shit);
    if(strlen(shit)>3){
        printf("text is longer than 3 characters");
    }
    else{
        printf("text is less than 3 characters");
    }
    return 0;
}
