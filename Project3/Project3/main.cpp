//#include <Dean.h>
//#include <StudentEx.h>
//#include <Graduate.h>
#include <PostDoctor.h>
int main()
{
	////1、默认构造三个对象，并使用SetInfo函数设置基本信息
	//Person person1;
	//Teacher teacher1;
	//Dean dean1;
	//person1.SetInfo("张三", "0", 18);
	//teacher1.SetInfo("李四", "1", 19, "讲师", "A108", "高等数学");
	//dean1.SetInfo("王五", "1", 20, "教授", "A108", "线性代数", 9999.9, 1, 15, "科研");

	//2、有参构造三个对象
	//Person person2("小明", "1", 18);
	//Teacher teacher2("小李", "0", 30, "讲师", "A108", "泛函分析");
	//Dean dean2("小张", "1", 50, "教授", "A108", "测度论", 10000, 1, 20, "教学");

	//3、输出对象信息
	//person1.Display();
	//teacher1.Display();
	//dean1.Display();
	/*person2.Display();
	teacher2.Display();
	dean2.Display();*/

	//StudentEx StudentEx1("宋楚嘉", 1, 18, "地理信息科学", "114202", 1, 4, "数学");
	//StudentEx1.Display();

	//Graduate Graduate1("宋楚嘉", 1, 24, "地理信息科学", "114202", 1, 4, 2);
	//Graduate1.Display();

	//Teacher teacher2("张三", "0", 30, "讲师", "A108", "泛函分析");
	//PostDoctor PostDoctor1("宋楚嘉", 1, 24, "地理信息科学", "114202", 1, 4, 2, teacher2);
	//PostDoctor1.Display();

	Teacher teacher2("张三", "0", 30, "讲师", "A108", "泛函分析");
	PostDoctor PostDoctor1("宋楚嘉", 1, 24, "地理信息科学", "114202", 1, 4, 2, teacher2);
	Student& rs  = PostDoctor1;
	rs.Display();

	//Teacher teacher2("张三", "0", 30, "讲师", "A108", "泛函分析");
	//PostDoctor PostDoctor1("宋楚嘉", 1, 24, "地理信息科学", "114202", 1, 4, 2, teacher2);
	//Teacher& rt = PostDoctor1;
}
