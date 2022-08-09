#include <iostream>
#include <random>
#include <set>

using namespace std;
set<int> sort; 

int main(){
    int random; 
    int a[10] = {}; 
    bool chkNum(int number);
    
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(1, 10);
//중복 제거하여 난수 생성
    printf("********난수생성결과********\n");
    for(int i=0;i<10;i++){
        random = dis(gen);
        while(true){
           random = dis(gen);
           if(chkNum(random) == false)
               continue;
           
           a[i] = random; 
           printf("%d ", a[i]);
           sort.insert(random);  
           break;
       }
    }
    printf("\n");
    
    printf("********오름차순정렬********\n");
    set<int>::iterator iter;
    for(iter = sort.begin(); iter != sort.end(); iter++){
        cout << *iter << " ";
    }
    cout << endl; 
    printf("********내림차순정렬********\n");
    set<int>::reverse_iterator r_iter; 
    for(r_iter = sort.rbegin(); r_iter != sort.rend(); r_iter++){
        cout << *r_iter << " ";
    }
    cout << endl;

    return 0;
}

bool chkNum(int number){
    for(int i=0; i<10;i++){
        if(*sort.find(number) == number)
            return false;
    }
    return true;
}
