#include <stdio.h>
int main(int argc, char const *argv[]) {
    int t;
    char text[101];
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%s", text);
        for(int j = 0; text[j]!= '\0'; j++){
        	if(text[j] == ' ')continue;
        	if(text[j] < 97){
        		text[j] += 32;
			}
		}
		for(int j=0; text[j] != '\0'; j++){
			if(j%2 == 0){
				printf("%c", text[j]-32);
			}else{
				printf("%c", text[j]);
			}
		}
        printf("\n");
    }
    return 0;
}



