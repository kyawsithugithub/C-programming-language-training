
#include <stdio.h>

int main(void)
{
	// Variables int, float, double, char;
	int scienceMark;
	int englishMark = 65;
	int physicMark, chemistryMark;
	float tutionFees = 100.30;
	char overallGrade = 'B';
	
	scienceMark = 80;
	physicMark = chemistryMark = 70;
	
	printf("Dear Noble, here are your mark and grading for this month.\nScience Mark: %d\nEnglish Mark: %d\n", scienceMark, englishMark);
	printf("Physic Mark: %d\n", physicMark); 
	printf("Chemistry Mark: %d\n", chemistryMark);
	printf("Overall Grade: %c\n", overallGrade);
	printf("Tution Fees: %0.2f\n", tutionFees);
	
	
    return 0;
}
