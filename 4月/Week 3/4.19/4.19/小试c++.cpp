#define _CRT_SECURE_NO_WARNINGS 
//#include <iostream>
//using namespace std;
//void main()
//{
//	int x = 8;
//	int y = 9;
//	cout << endl;
//	cout << x - y << " " << x * y << " " << x + y;
//	cout << endl;
//}

//#include<iostream>
//using namespace std;
////����һ���࣬������student
//class student //��Ϊstudent��"�ࣨcalss��"���͵����ݽṹ 
// //���ݳ�Ա�ͳ�Ա����
//{
//private://˽�б���
//	int num;
//	int score;
//public://���幫�ú���
//	
//	void setdata()
//	{
//		cin >> num;
//		cin >> score;
//	}
//	void dispaly()
//	{
//		cout << "num=" << num << endl;
//		cout << "score=" << score << endl;
//	}
//};
////student stud1, stud2;//����stud1��stud2Ϊstudent��ı�������Ϊ����
////void main()
////{
////	stud1.setdata();
////	stud1.dispaly(); 
////	stud2.setdata();
////	stud2.dispaly();
////}
//student a, b;//����stud1��stud2Ϊstudent��ı�������Ϊ����
//void main()
//{
//	a.setdata();
//	a.dispaly();
//	b.setdata();
//	b.dispaly();
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	int f(int x, int y, int z);
//	cin >> a >> b >> c;
//	c = f(a, b, c);
//	cout << c;
//}
//
//int f(int x, int y, int z)
//{
//	int max;
//	if (x < y)
//		max = y;
//	else
//		max = x;
//	if (z > max)
//		max = z;
//	return max;
//}

//#include<iostream>
//int main()
//{
//	int a, b;
//	std::cin >> a >> b;
//	int c = a + b;
//	std::cout << "a+b=" << a + b;
//}

#include<iostream>
using namespace std;
int main()
{

	void sort(int x, int y, int z);
	int x, y, z;
	cin >> x >> y >> z;
	sort(x, y, z);
	return 0;
}

void sort(int x, int y, int z)
{
	int temp;
	if (x > y)
	{
		temp = x;
		x = y;
		y = temp;
	}
	if (z < x)
		cout << z << ',' << x << ',' << y << endl;
	else if (z < y)
		cout << x << ',' << z << ',' << y << endl;
	else
		//�������cout <<x,y,z;��ֻ���ӡxһ������
	cout << x << ',' << y << ',' << z << endl;
}