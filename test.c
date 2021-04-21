
#include <stdio.h> 

int oprun(void); 
int testop(void);
void first(void); 

int main() {
	first();
	int d = testop(); 
	printf("%d\n", d);   

	return 0; 
}
