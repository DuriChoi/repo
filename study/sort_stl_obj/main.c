#include <stdio.h>
#include "sort.h"

int main(){
    int a[10] = {1,4,7,8,9,5,6,2,10,3};
	int a_size = sizeof(a) / sizeof(a[0]);
    
	sort(a, a_size);

    return 0;
}
