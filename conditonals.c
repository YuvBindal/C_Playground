#include <stdio.h>
#include <math.h>
#include <stdbool.h>
char nestedFunc(double);
bool can_dine_in(long, long);
bool is_vaccinated(bool);
int expectedval();

#define SQUARE(x) ((x *x))

int main() {
	char myLetterGrade = nestedFunc(10);
	printf("%c\n", myLetterGrade);
	printf("%d\n", expectedval());
	can_dine_in(1,2);
	return 0;
}

char nestedFunc(double  myGrade) {
	char answer;
	if (myGrade >= 8) {
		answer = 'A';
	} else if (myGrade < 8 && myGrade >=5) {
		answer = 'B';
	} else if (myGrade <5 && myGrade >=3) {
		answer = 'C';
	} else {
		answer = 'D';
	}
	return answer;
}

int  expectedval() {
	double sum = 0.3;
	double expected = 0.1 + 0.2;
	if (fabs(expected - sum) < 0.00001) {
		return 1;
	}
	return 0;

}

bool is_vaccinated(bool status) {
	(status) ?	printf("%s\n", "this person has been vaccinated"):
	printf("%s\n", "this person has not been vaccinated");
	return status;
}





bool can_dine_in(long p, long q) {
	bool is_vaccinated_p = true;
	bool is_vaccinated_q= false;
	bool is_a_child_p = false;
	bool is_a_child_q = false;
	bool are_from_same_household = true;

	if (is_vaccinated_p && is_vaccinated_q) {
		printf("%s\n", "they good");
		return true;
	} else if ((is_a_child_p || is_a_child_q) && are_from_same_household) {
		printf("%s\n", "they good");
		return true;
	}
	printf("%s\n", "they bad");
	return false;
	


}

