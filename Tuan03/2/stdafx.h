// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "targetver.h"

#include <stdio.h>
#include <tchar.h>


struct Node {
	int data;
	struct Node *pNext;
};
typedef struct Node NODE;

struct List {
	struct Node *pHead;
	struct Node *pTail;
};
typedef struct List LIST;
// TODO: reference additional headers your program requires here