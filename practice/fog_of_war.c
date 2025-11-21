#include<stdio.h>
#include<stdbool.h>

int main(){
	
	const bool RENDER_FOG_OF_WAR = true;
	
	bool *fogptr = &RENDER_FOG_OF_WAR;
	
	*fogptr = false;
	
	if(RENDER_FOG_OF_WAR == false){
		printf("RENDER_FOG_OF_WAR is false");
	}else{
		printf("RENDER_FOG_OF_WAR is true");
	}
	 
	return 0;
}
