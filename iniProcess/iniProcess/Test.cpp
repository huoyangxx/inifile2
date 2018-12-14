#include <iostream>
#include "inifile.h"
using namespace inifile;



using namespace std;
int main()
{
	//create a new ini file
	//char filepath[] = "./../../test.ini";
	//FILE *fp = fopen(filepath, "w");
	//char content[] = "# USER=root \r\n [COMMON] \n DB=sys   	\nPASSWD=tt   \n#commit   \n ;--------- \n[DEFINE] \nname=cxy\nvalue=1 #do test";
	//fwrite(content, sizeof(char), strlen(content), fp);
	//fclose(fp);

	//test
	//IniFile ini;
	//ini.load(filepath);

	//char saveas_path[] = "./../../test_save_as.ini";

	//ini.saveas(saveas_path);

	//fp = fopen(saveas_path, "r");
	//char buf[200];
	//memset(buf, 0, 200 * sizeof(char));

	//fread(buf, sizeof(char), 200, fp);
	//fclose(fp);
	//EXPECT_EQ(buf, string("USER=root\n[COMMON]\nDB=sys\nPASSWD=tt\n#commit\n;---------\n[DEFINE]\nname=cxy\n#测试\nvalue=1\n"));
	char filepath[] = "./../../test.ini";
	IniFile ini;
	ini.load(filepath);
	int ret = 0;
	string result = ini.getStringValue("COMMON", "DB", ret);
	//ini.setValue("YYC","name","yangyechao","my name");
	//ini.deleteKey("YYC", "name");
	ini.save();
	cout << "Test" << endl;
	//getchar();
	return 0;
}