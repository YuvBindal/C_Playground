#include <stdio.h>
#include <string.h>



int strStr(char* haystack, char* needle) {
	size_t hayLength = strlen(haystack);
	size_t needleLength = strlen(needle);
	size_t currentIndex = 0;
	if (needleLength > hayLength) {
		return -1;
	} else {
		
	}


	return -1;

}




int main() {
	size_t testLen = strlen("asdasd");
	strStr("happybuthappy", "happy");
	printf("%d" ,testLen);
	return 0;
}
