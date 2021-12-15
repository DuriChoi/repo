char *data[32]; //반복문을 사용하여 원하는 값을 출력하기 위해 포인터배열 사용
+  29     char szSerial[32]; //serial 저장 배열
+  30     char szMAC[32]; //MAC 저장 배열
+  31     int i = 0 //배열 인수
+  32
+  33     strcpy(szOrigin, szData);
+  34     tmp = szOrigin;
+  35     while((ptr = strsep(&tmp, ",")) != NULL){
+  36         //printf("ptr = [%s]\n", ptr);
+  37         data[i]=ptr;
+  38 //      printf("data[%d]: %s\n", i,data[i]);
+  39         i++;
+  40     }
+  41     strcpy(szSerial, data[4]);
+  42     strcpy(szMAC, data[6]);
+  43
+  44     printf("Serial: %s\n", szSerial);
+  45     printf("MAC: %s\n", szMAC);
   46
   47     return 0;
   48 }

