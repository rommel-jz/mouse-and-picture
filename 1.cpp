#include<graphics.h>//需要在easyx里下载
#include<iostream>
#include<conio.h>//用于_getch()
using namesapce std;
int main() {
  //创建页面
	initgraph(800, 800);//长与宽，单位像素（px）
	IMAGE img;//定义一个图片类型变量
  //加载图片，可以认为是给img变量赋值
	loadimage(&img, L"雷背景.png",80,80);//所需要的图片要在可执行文件的目录里，” “里为窄字符，要用L变为宽字符
	putimage(0, 0, &img);//显示图片，图片左上角与页面位置坐标对应
	cout<<"按下任意键退出…………";
  _getch();
	return 0;

 }
