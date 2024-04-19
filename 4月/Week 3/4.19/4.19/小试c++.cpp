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
////声明一个类，类名叫student
//class student //名为student的"类（calss）"类型的数据结构 
// //数据成员和成员函数
//{
//private://私有变量
//	int num;
//	int score;
//public://定义公用函数
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
////student stud1, stud2;//定义stud1与stud2为student类的变量，成为对象
////void main()
////{
////	stud1.setdata();
////	stud1.dispaly(); 
////	stud2.setdata();
////	stud2.dispaly();
////}
//student a, b;//定义stud1与stud2为student类的变量，成为对象
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
		//如果这样cout <<x,y,z;，只会打印x一个数。
	cout << x << ',' << y << ',' << z << endl;
}