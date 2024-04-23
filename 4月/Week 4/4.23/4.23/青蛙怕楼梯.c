#define _CRT_SECURE_NO_WARNINGS 
//已知有n阶楼梯，小青蛙一次可跳1阶或2阶楼梯
//问小青蛙要爬到楼顶，总共有多少种跳法
//斐波那契数列
#include <stdio.h>

int meth(int n)//台阶
{
	int step = 0;//步数
	if (n == 1||n == 0)
		return 1;
	else
		return meth(n - 1) + meth(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int m = meth(n);
	printf("小青蛙上%d层台阶有点%d种方法\n", n, m);
	return 0;
}

//#include <stdio.h>  
//
//// 使用递归函数计算跳法数量  
//int frogJump(int n) {
//    if (n <= 0) {
//        return 0;
//    }
//    else if (n == 1) {
//        // 只有一层台阶时，只有一种跳法  
//        return 1;
//    }
//    else if (n == 2) {
//        // 有两层台阶时，可以一次跳1级跳两次，或者一次跳2级，共2种跳法  
//        return 2;
//    }
//    else {
//        // 对于n层台阶，小青蛙可以从n-1层跳1级上来，也可以从n-2层跳2级上来  
//        // 因此，n层台阶的跳法数量是n-1层台阶和n-2层台阶跳法数量的和  
//        return frogJump(n - 1) + frogJump(n - 2);
//    }
//}
//
//int main() {
//    int n;
//    printf("请输入台阶的阶数n：");
//    scanf("%d", &n);
//
//    int ways = frogJump(n);
//    printf("小青蛙跳到最后一层（第%d层）的不同跳法数量为：%d\n", n, ways);
//
//    return 0;
//}