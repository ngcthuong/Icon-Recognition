/*

create by rosie
2017.03.30

*/

#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <vector>
#include <opencv2\opencv.hpp>
#include <string>
#include "iconRecog.h"	

using namespace std;
using namespace cv;


int main() {

	iconRecog icon;

//	icon.HOGfeature2XML(); // Ư¡ ����
	
//	icon.trainingBySVM(); // Ʈ���̴�
	
//	icon.testSVMTrainedData(); // ������

	icon.testWithRealData(); // ���� app ĸ��ȭ������ ��

	return 0;

}
