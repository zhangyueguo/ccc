#include <iostream>
#include <stdlib.h>
#include <string> 
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* 题目描述 
       1. 提示用户输入用户名
	   2.接受用户的输入
	   3.然后向用户问好，hello xxx
	   4.告诉用户名字的长度 
       5.告诉用户名字的首字母是什么 
       6.如果用户直接输入回车，那么告诉用户输入为空
	   7.如果用户输入的是yueguo，那么告诉用户的角色是一个管理员 
*/


int main(int argc, char** argv) {
	
	string name;
	cout << "please input your name:";
	getline(cin,name);
	if(name.empty())
	{
		cout<< "input is null.." <<endl;
		return 0;
	}
	if(name == "yueguo"){
		cout<< "you is adminmaster" <<endl;
	}
	cout<< "hello"+name <<endl;
	cout<< "name length is "<< name.size() <<endl;
	cout<< "name fist is "<<name[0]<<endl;
	
	
	return 0;
}
