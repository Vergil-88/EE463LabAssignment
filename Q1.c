#include <stdio.h>

int main (int argc, char* argv[]){

    char character[] = "abcdefghijklmnopqrstuvwxyz"; 
    int ch1; 
    int ch2; 
    int ch3; 
    int ch4; 

    for(ch1 = 0; ch1 < 26; ch1++){ 
        for(ch2 = 0; ch2 < 26; ch2++){ 
                if(ch2 == ch1){ 
                    continue;
                }
            for(ch3 = 0; ch3 < 26; ch3++){ 
                if(ch3 == ch1 || ch3 == ch2 ){
                    continue;
                }
                for(ch4 = 0; ch4 < 26; ch4++){ 
                    if(ch4 == ch1 || ch4 == ch2 || ch4 == ch3 ){
                        continue;
                    }

                    printf("%c%c%c%c\n",character[ch1],character[ch2],character[ch3],character[ch4]);
                }
            }
        }
    }



    return 0;
}