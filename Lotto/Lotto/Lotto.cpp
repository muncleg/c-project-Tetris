// Lotto.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
using namespace std;


int main()
{
		int lotto[6];
		srand((unsigned int)time(0));

		for (int i = 0; i < 6; i++)
		{
			lotto[i] = rand() % 45 + 1;
			if (lotto[i] == lotto[i - 1])
			{ 
				i--;
			}	
	    }

		cout << "금주의 로또 번호 : ";
		for (int i = 0; i < 6; i++)
			cout <<lotto[i]<<" ";

	  return 0;
}

