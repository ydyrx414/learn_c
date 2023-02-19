/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
	int Number,Number1,Number2,Answer;
	double Ratio = 9.0 / RAND_MAX;
	
	srand(time(0));
	Number1 = (int)( Ratio * rand() );
	Number2 = (int)( Ratio * rand() );
	
	if( Number1 > Number2){
		printf("%d - %d = ",Number1,Number2);
		scanf("%d",&Answer);
		
		if(Answer == Number1 - Number2) printf("恭喜你答对了！\n");
		else printf("正确答案是：%d\n",Number1 - Number2);
	}
	else{
		printf("%d - %d = ",Number2,Number1);
		scanf("%d",&Answer);
		
		if(Answer == Number2 - Number1) printf("恭喜你答对了！\n");
		else printf("正确答案是：%d\n",Number2 - Number1);
	}
		
	return 0;
}
/*


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	int Number1, Number2; //??????
	int CorrectAnwer; //???????? 
	int AnswerOfStudent; //????????? 
	double Ratio;	//???? 
	
	//??????????(0-9) 
	Ratio = 9.0 / RAND_MAX; //???? 
	srand( time(0) );
	Number1 = (int)( rand() * Ratio );
	Number2 = (int)( rand() * Ratio );
	
	//?Number1????,Number2?????
	//??Number1 < Number2,????? 
	if (Number1 < Number2 ) {
		//????? 
		CorrectAnwer = Number1; 
		Number1 = Number2;
		Number2 = CorrectAnwer;
	}

	//?????????? 
	CorrectAnwer = Number1 - Number2;
	
	//????????,?????????
	printf( "%d - %d = ", Number1, Number2 );
	scanf( "%d", &AnswerOfStudent );
	
	//?????,??"??????^:^",????????
	if ( AnswerOfStudent == CorrectAnwer ) {
		printf( "??????^:^\n" );
	}
	else {
		printf( "?????:%d\n", CorrectAnwer );
	} 
}

*/