// tetris.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include"CCore.h"

int main()
{
	if (!CCore::GetInst()->Init())
	{
		return 0;
	}

	CCore::GetInst()->Run();

	CCore::DestroyInst();

    return 0;
}

