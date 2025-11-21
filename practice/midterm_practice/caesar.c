#include<stdio.h>

int main(){
	char test[] = "Hello WorldzZ 123";
	char test2[]= "Aa Khoor ZruogcC 123";
	printf("Encryption\n");
	for(int i = 0; test[i] != '\0'; i++){
		cipher_string(test[i], 3, 1);
	}
	printf("\nDecryption\n");
	for(int i = 0; test[i] != '\0'; i++ ){
		cipher_string(test2[i], 3, 0);
	}
	return 0;
}

void cipher_string(char *str, int shift, int encode){
	if((int)str >= 65 && (int)str <=122 ){
		if(encode == 1){
			//printf("%d (%c)+ %d = %d (%c)\n",(int)str, str, shift,(int)str+shift, str+shift);
			if(((str + shift) > 90 && str <= 90) || (str + shift) > 122){
				str = str +  shift -26;
			}else{
				str = str +  shift;
			}
			

		}else{
			//printf("Decripting...\n");
			//printf("%c - %d = %c\n",str, shift, str-shift);
			//printf("%d (%c) - %d = %d (%c)\n", (int)str, str, shift, (int)str - shift, str-shift);
			if((str - shift) < 65|| (str - shift) < 97 && (str > 90)){
				//printf("Handling bounds...\n");
				str = str - shift + 26;
			}else{
				str = str - shift;
			}
		}
	}
	printf("%c", str);

}
