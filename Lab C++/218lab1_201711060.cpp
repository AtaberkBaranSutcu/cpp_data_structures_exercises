#include <stdio.h>
#include <stdlib.h>

struct ogrData{
	
	int id,qz,lab,mid,fin;
	float avg;
};

void insert (struct ogrData* ogrDatx, int numStd){
	
	for(int i=0;i<numStd;i++){
		
		printf("Enter the student id: ");
		scanf("%d",&ogrDatx[i].id);
		printf("Enter the student's average grade for all quizes: ");
		scanf("%d",&ogrDatx[i].qz);
		printf("Enter the student's average grade for all labs:");
		scanf("%d",&ogrDatx[i].lab);
		printf("Enter the student's grade for midterm: ");
		scanf("%d",&ogrDatx[i].mid);
		printf("Enter the student's grade for final: ");
		scanf("%d",&ogrDatx[i].fin);
		
		ogrDatx[i].avg=(ogrDatx[i].qz*0.15)+(ogrDatx[i].lab*0.15)+(ogrDatx[i].mid*0.3)+(ogrDatx[i].fin*0.4);
		
		printf("The average score for this student is %f\n",ogrDatx[i].avg);
		
		printf("\n*****************************************************\n\n");
		
	}
	
};

void average_finder(struct ogrData* ogrDatx, int numStd){
	
	float qzA=0,labA=0,midA=0,finA=0,avgA=0;
	
	for(int i=0;i<numStd;i++){
		qzA+=ogrDatx[i].qz;
		labA+=ogrDatx[i].lab;
		midA+=ogrDatx[i].mid;
		finA+=ogrDatx[i].fin;
		avgA+=ogrDatx[i].avg;	
	}
	
	printf("Average quiz score = %f\n",qzA/numStd);
	printf("Average lab score = %f\n",labA/numStd);
	printf("Average midterm score = %f\n",midA/numStd);
	printf("Average final score = %f\n",finA/numStd);
	printf("This course's average score = %f\n",avgA/numStd);
};

int main(){
	
	struct ogrData* ogrDatx;
	int numStd;
	
	printf("Enter the number of students: ");
	scanf("%d",&numStd);
	printf("\n");
	
	ogrDatx=(struct ogrData*) malloc(sizeof(struct ogrData) * numStd);
	
	insert(ogrDatx,numStd);
	
	average_finder(ogrDatx,numStd);
	
	free(ogrDatx);
	return 0;
}
