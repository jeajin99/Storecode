#include <stdio.h>
#include <stdlib.h>

char jp1[5] = "ESTJ";
char jp2[5] = "INFP";
char final[5];

char returnjp(int n, int x)
{
	final[n] = x ? jp2[n] : jp1[n];
}

int main()
{
	int i, j;
	char MBTI[5];
	char result[5];
	scanf("%s", MBTI);
	for(i = 0 ; i < 4; i++){
		for(j = 0; j < 4; j++){
			if(MBTI[i] == jp1[j]) result[i] = 1;
			else if (MBTI[i] == jp2[j]) result[i] = 0;		
		}
	}
	
	for(i = 0; i < 4; i++)
	{
		returnjp(i, result[i]);
		printf("%c", final[i]);	
	}	
}
