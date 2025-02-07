#include<graphics.h>
#include<conio.h>
#include<iostream>
#include<Windows.h>
using namespace std;
int main() {
  //定义鼠标消息
	MOUSEMSG msg;
	initgraph(500, 500);
	cleardevice();
	while (true) {
		msg = GetMouseMsg();//获取鼠标消息
    //如果点击鼠标左键，
		if (msg.uMsg == WM_LBUTTONDOWN) {
			cout << msg.x << " " << msg.y;
			setcolor(RED);//设置颜色
			outtextxy(msg.x, msg.y,_T("●"));//在点击的位置绘制一个点
		}//_T使窄字符变为宽字符，L也可以
		if (msg.uMsg == WM_RBUTTONDOWN) {
			break;
		}
		Sleep(10);
	}
	closegraph();//退出窗口

	return 0;
}
