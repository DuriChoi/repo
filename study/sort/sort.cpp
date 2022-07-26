#include <iostream>
#include <random>

using namespace std;

int a[10] = {};

int main(){
    int random; 
    int temp; 
    bool chkNum(int number);

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(1, 10);

    printf("********난수생성결과********\n");
    for(int i=0;i<10;i++){
       while(true){
           random = dis(gen);
           if(chkNum(random) == false)
               continue;
               
           a[i] = random;
           break;
       }
       printf("a[%d]: %2d\n", i, a[i]);
    }
    printf("***************************\n");
    
    printf("*****선택정렬_오름차순*****\n");
    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
       printf("a[%d]: %2d\n", i, a[i]);
    }
    printf("***************************\n");
    
    printf("*****선택정렬_내림차순*****\n");
    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
       printf("a[%d]: %2d\n", i, a[i]);
    }
    printf("****************************\n");
     
    return 0;
}

bool chkNum(int number){
    for(int i=0; i<10;i++){
        if(number == a[i])
            return false;
    }
    return true;
}
