//#include <Dean.h>
//#include <StudentEx.h>
//#include <Graduate.h>
#include <PostDoctor.h>
int main()
{
	////1��Ĭ�Ϲ����������󣬲�ʹ��SetInfo�������û�����Ϣ
	//Person person1;
	//Teacher teacher1;
	//Dean dean1;
	//person1.SetInfo("����", "0", 18);
	//teacher1.SetInfo("����", "1", 19, "��ʦ", "A108", "�ߵ���ѧ");
	//dean1.SetInfo("����", "1", 20, "����", "A108", "���Դ���", 9999.9, 1, 15, "����");

	//2���вι�����������
	//Person person2("С��", "1", 18);
	//Teacher teacher2("С��", "0", 30, "��ʦ", "A108", "��������");
	//Dean dean2("С��", "1", 50, "����", "A108", "�����", 10000, 1, 20, "��ѧ");

	//3�����������Ϣ
	//person1.Display();
	//teacher1.Display();
	//dean1.Display();
	/*person2.Display();
	teacher2.Display();
	dean2.Display();*/

	//StudentEx StudentEx1("�γ���", 1, 18, "������Ϣ��ѧ", "114202", 1, 4, "��ѧ");
	//StudentEx1.Display();

	//Graduate Graduate1("�γ���", 1, 24, "������Ϣ��ѧ", "114202", 1, 4, 2);
	//Graduate1.Display();

	//Teacher teacher2("����", "0", 30, "��ʦ", "A108", "��������");
	//PostDoctor PostDoctor1("�γ���", 1, 24, "������Ϣ��ѧ", "114202", 1, 4, 2, teacher2);
	//PostDoctor1.Display();

	Teacher teacher2("����", "0", 30, "��ʦ", "A108", "��������");
	PostDoctor PostDoctor1("�γ���", 1, 24, "������Ϣ��ѧ", "114202", 1, 4, 2, teacher2);
	Student& rs  = PostDoctor1;
	rs.Display();

	//Teacher teacher2("����", "0", 30, "��ʦ", "A108", "��������");
	//PostDoctor PostDoctor1("�γ���", 1, 24, "������Ϣ��ѧ", "114202", 1, 4, 2, teacher2);
	//Teacher& rt = PostDoctor1;
}
