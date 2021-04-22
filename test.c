
#include <stdio.h> 

int oprun(void); 
int testop(void);
void first(void); 
void second(void); 
void breakop(void); 


int main() {

	//breakop(); //breaks the program (undefined opcode) 
	first();
	second(); 
	int d = testop(); 
	printf("%d\n", d);   

	return 0; 
}
