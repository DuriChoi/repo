#include <cstdio>

#include "common.h"
#include "cdp.h"
#include "lpp.h"
#include "mp3p.h"

using namespace std;

int main(){
	char a, b;
	bool loop = true;
    bool ploop = true; 
    int status;

	CDp cdp;
    LPp lpp;
    MP3P mp3; 
    Common cm;	
   
    while(loop){ 
        ploop = true; 
        cm.player();
        a = getchar();
        if(a=='q'){
            break;
        }else if(a=='1'){
            printf("CDP를 선택하셨습니다.\n"); 
            while(ploop){
                cdp.player();	
                getchar(); 
                a = getchar();
                if(a=='p'){
                    if(status==22){
                        lpp.stop(); 
                        status=cdp.play();
                    }else if(status==222){
                        mp3.stop();
                        status=cdp.play();
                    }else if(status==2){
                        printf("\n이미 CDP가 재생 중입니다.\n");
                    }else
                        status=cdp.play();
                }else if(a=='s'){
                    if(status!=2){
                        printf("\n CDP가 재생중이지 않습니다.\n");
                    }else
                        status=cdp.stop();
                }else if(a=='a'){
                    if(status!=2){
                        printf("\n CDP가 재생중이지 않습니다.\n");
                    }else
                        status=cdp.pause();
                }else if(a=='u'){
                    status=cdp.volUp();
                }else if(a=='d'){
                    status=cdp.volDown();
                }else if(a=='q'){
                   ploop=false; 
                }else{
                    printf("\nwrong input!\n\n");
                }
            }
        }else if(a=='2'){
            printf("LPP를 선택하셨습니다.\n"); 
            while(ploop){
                lpp.player();	
                getchar(); 
                a = getchar();
                if(a=='p'){
                    if(status==2){
                        cdp.stop(); 
                        status=lpp.play();
                    }else if(status==222){
                        mp3.stop();
                        status=lpp.play();
                    }else if(status==22){
                        printf("\n이미 LPP가 재생 중입니다.\n");
                    }else
                        status=lpp.play();
                }else if(a=='s'){
                    if(status!=22){
                        printf("\nLPP가 재생중이지 않습니다.\n");
                    }else
                        status=lpp.stop();
                }else if(a=='a'){
                    if(status!=22){
                        printf("\nLPP가 재생중이지 않습니다.\n");
                    }else
                        status=lpp.pause();
                }else if(a=='u'){
                    status=lpp.volUp();
                }else if(a=='d'){
                    status=lpp.volDown();
                }else if(a=='c'){
                    lpp.changeNiddle();
                }else if(a=='q'){
                   ploop=false; 
                }else{
                    printf("\nwrong input!\n\n");
                }
            }
        }else if(a=='3'){
            printf("MP3를 선택하셨습니다.\n"); 
            while(ploop){
                mp3.player();	
                getchar(); 
                a = getchar();
                if(a=='p'){
                    if(status==2){
                        cdp.stop(); 
                        status=mp3.play();
                    }else if(status==22){
                        lpp.stop();
                        status=mp3.play();
                    }else if(status==222){
                        printf("\n이미 MP3가 재생 중입니다.\n");
                    }else
                        status=mp3.play();
                }else if(a=='s'){
                    if(status!=222){
                        printf("\nMP3가 재생중이지 않습니다.\n");
                    }else
                        status=mp3.stop();
                }else if(a=='a'){
                    if(status!=222){
                        printf("\nMP3가 재생중이지 않습니다.\n");
                    }else
                        status=mp3.pause();
                }else if(a=='u'){
                    status=mp3.volUp();
                }else if(a=='d'){
                    status=mp3.volDown();
                }else if(a=='q'){
                   ploop=false; 
                }else{
                    printf("\nwrong input!\n\n");
                }
            }
        }else
            printf("\nwrong input!\n\n");
        
        getchar();      
        
    }
    return 0;
}
