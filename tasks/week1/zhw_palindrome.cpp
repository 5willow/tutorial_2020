//�նӿ���
//Ѱ���ַ����е�������Ӵ�

//written by ��֣���

//data started �� 2020��10��2��
//version �� 


#include<iostream>
#include<string.h>

using namespace std;

//function:Ѱ��������Ӵ�
//input: �����ַ���
//output��������ַ�������Ļ����ִ�
//written by : ֣��� @SEIT
//data complted : 2020��10��2��
string longestPalindrome(const string/*in*/); 

int main()
{
	string str = "ccbabdc";
	cout << longestPalindrome(str);
	return 0;
}

//function:Ѱ��������Ӵ�
//input: �����ַ���
//output��������ַ�������Ļ����ִ�
//written by : ֣��� @SEIT
//data complted : 2020��10��2��
string longestPalindrome(const string str/*in*/)
{

	int index_max = 0; //������ִ�������
	int count_max = 0; //������Ӵ�����

	//�����ַ���
	for (int i = 2; i < str.length(); i++)

		//��һ���ַ���������ǰ���ַ���ͬʱ���ж�Ϊ�����ִ�
		if (str[i] == str[i - 2]) 
		{
			int start = i - 2; //�����Ӵ��ĵ�һ���ַ�
			int end = i;      //�����Ӵ������һ���ַ�

			int index = start;  //��¼��ǰ�����ִ�������
			int count = 1;    //��¼��ǰ�����ַ�����һ�ࣩ

			//**������ǰ�����Ӵ��ĳ���**//
			while ((--start) >= 0 && (end++) < str.length() && str[start] == str[end]) //�ӳ��Ӵ�
			{
				index = start; //��������
				count++;       //���ȸ���
			};

			//�жϸû����Ӵ��Ƿ�Ϊ�
			if (count > count_max)
			{
				index_max = index;
				count_max = count;
			}
		}

	//������Ӵ�
	return str.substr(index_max, 2 * count_max + 1);
}