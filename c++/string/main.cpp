#include <iostream>
#include <stdlib.h>
#include <string> 
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* ��Ŀ���� 
       1. ��ʾ�û������û���
	   2.�����û�������
	   3.Ȼ�����û��ʺã�hello xxx
	   4.�����û����ֵĳ��� 
       5.�����û����ֵ�����ĸ��ʲô 
       6.����û�ֱ������س�����ô�����û�����Ϊ��
	   7.����û��������yueguo����ô�����û��Ľ�ɫ��һ������Ա 
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
