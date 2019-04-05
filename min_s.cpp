#include <cstdio>
using namespace std;


int function_1(int *ptr_1, char *ptr_2){
	if(*ptr_1 == 3 && *ptr_2 == 'A'){
		std::cout<<"hit this hole!"<<std::endl;
	}

	return EXIT_SUCCESS;
}

int main(){
	int a = 3;
	char b = 'B'; //add some comments
	function_1(&a, &b);
	return 0;
}
