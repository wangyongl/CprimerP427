// CprimerP427.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <memory>
#include <string>
#include <iostream>

using namespace std;


int main()
{

	allocator<string>  alloc;
	auto const p = alloc.allocate(1);

	alloc.construct(p, "hello");

	cout << *p << endl;
	//cout << *++p << endl;

	//delete  p;
	alloc.destroy(p);

    return 0;
}

