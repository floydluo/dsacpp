﻿
#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

/******************************************************************************************
 * 测试、演示小工具
 ******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <typeinfo.h>

#include "comparator.h"
#include "checkOrder_Elem.h"
#include "checkOrder_list.h"

#include "double_Elem.h"
#include "increase_Elem.h"
#include "hailstone_Elem.h"
#include "increase_list.h"

#include "crc_Elem.h"
#include "crc_list.h"

#include "rand.h" //

#if defined(DSA_DEBUG) //
#define DSA(x) { x } //
#else
#define DSA(x) //
#endif