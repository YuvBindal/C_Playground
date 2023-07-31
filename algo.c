#include <stdio.h>
#include <string.h>

//other functions go here

struct keyValPair {
	char key[50];
	int value;
};

struct keyValPair dict[100];
int dictSize = 0;


void addElement(char *key, int value) {
	if (dictSize <= 100) {
		strcpy(dict[dictSize].key , key);
		dict[dictSize].value = value;
		dictSize++;
	}

}

int getElement(char *key) {
	//perform an O(n) search
	for (int i=0;i < dictSize;i++) {
		if (strcmp(dict[i].key , key) == 0) {
			return dict[i].value;		
		}
	}
	return -1;
}
void printDict() {
	for (int i=0; i< dictSize; i++) {
		printf("Key: %s, ", dict[i].key);
		printf("Value: %d\n", dict[i].value);
	}
}


int romanToInt(char* s, int dictSize) {
	int findMaxIndex =0;
	int maxVal = 0;
	int total = 0;
	for (int i=0; i< dictSize;i++) {
		if (maxVal < getElement(&s[i])) {
			maxVal = getElement(&s[i]);
			findMaxIndex = i;
		}
	}	
	for (int j = findMaxIndex; j < dictSize; j++) {
		printf("%d\n", findMaxIndex);
		total += getElement(&s[j]);
	}
	
	if (findMaxIndex-1 >= 0) {
		for (int k = findMaxIndex-1; k <= 0; k--) {
			total -= getElement(&s[k]);
		}
	}
	
	return total;

}




int main() {
	
	printf("%s\n","this is a code block");

	//run code from here
	addElement("I" ,1);
	addElement("V", 5);
	addElement("X",10);
	addElement("L", 50);
	addElement("C", 100);
	addElement("D", 500);
	addElement("M", 1000);


	printf("%d", dictSize);

	int myInt = romanToInt("MXII", 4);	
	printf("%d" , myInt);
	

	return 0;
}
