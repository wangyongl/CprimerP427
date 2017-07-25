// CprimerP427.cpp : 定义控制台应用程序的入口点。
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

