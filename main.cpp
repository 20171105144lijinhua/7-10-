//
//  main.cpp
//  7-10－
//
//  Created by 李锦华 on 18/7/10.
//  Copyright © 2018年 李锦华. All rights reserved.
//

//
//  main.cpp
//  7-10
//
//  Created by 李锦华 on 18/7/10.
//  Copyright © 2018年 李锦华. All rights reserved.
//

#include<iostream>
#include<fstream>
using namespace std;
struct student
{
    char ID[15];
    char name[20];
    char sex[10];
    char BIRTH[30];
    char class_[20];
    char phoneno[20];
    char judge1[10];
    char judge2[10];
    char judge3[10];
    char judge4[10];
    char judge5[10];
    int sum;
};

int main()
{
    int p=0;
    ifstream START("/Users/s20171105144/Desktop/studentdata.csv");//打开studentdata.csv文件用来后续文本读取
    string close;
    while (getline(START, close))
    {
        p++;
    }
    int i=0;
    FILE *fp1;
    struct student s[200];
    
    if ((fp1=fopen("/Users/s20171105144/Desktop/studentdata.csv","r"))==0)
    {
        printf("Error \n");
    }
    else
    {
        while(fscanf(fp1,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s",s[i].ID,s[i].name,s[i].sex,s[i].BIRTH,s[i].class_,s[i].phoneno,s[i].judge1,s[i].judge2,s[i].judge3,s[i].judge4,s[i].judge5))//循环读取数据源文件的文本内容
        {
            
            
            if(i>=p)
            {
                break;
                
            }
            i++;
        }
    }
    
    FILE *fp2;
    fp2=fopen("/users/s20171105144/Desktop/studentdata1.csv","w");
    for(i=0;i<p;i++)
    {
        if(i==0)
        {
            printf("%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s\n",s[i].ID,s[i].name,s[i].sex,s[i].BIRTH,s[i].class_,s[i].phoneno,s[i].judge1,s[i].judge2,s[i].judge3,s[i].judge4,s[i].judge5);//测试输出结果
            fprintf(fp2,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s\n",s[i].ID,s[i].name,s[i].sex,s[i].BIRTH,s[i].class_,s[i].phoneno,s[i].judge1,s[i].judge2,s[i].judge3,s[i].judge4,s[i].judge5);//把第一行字符原样输出
        }
        else
        {
            printf("%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s \n",s[i].ID,s[i].name,s[i].sex,s[i].BIRTH,s[i].class_,s[i].phoneno,s[i].judge1,s[i].judge2,s[i].judge3,s[i].judge4,s[i].judge5);//测试输出结果
            fprintf(fp2,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s \n",s[i].ID,s[i].name,s[i].sex,s[i].BIRTH,s[i].class_,s[i].phoneno,s[i].judge1,s[i].judge2,s[i].judge3,s[i].judge4,s[i].judge5);//第一行外所有的数据输出
        }
    }
    return 0;
}
