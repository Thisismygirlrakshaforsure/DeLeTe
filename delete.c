#include<stdio.h>
#include<conio.h>
void main()
{
  int id;
char name[50], add[50]; ch
FILE *fp, *fpt;
fp=fopen("original.txt","r");
fpt=fopen("temp.txt","w");
printf("\n enter data you want to delete");
scanf("%s",ch);
while(fscanf(fp," %d \t %s \t %s \t \n" id, name, add);
  }
}
fclose(fp);
fclose(fpt);
remove("original.txt");
rename("temp.txt","original.txt");
printf("\n Data deleted");
}
getch();
}
