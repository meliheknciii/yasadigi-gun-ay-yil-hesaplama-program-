#include <stdio.h>
#include <stdlib.h>

struct ben_yasadigim{
	int gun;
	int ay;
	int yil;
};

int main(int argc, char *argv[]) {
struct ben_yasadigim bugun;
struct ben_yasadigim dogum;
printf("dogum tarihini girin "); scanf("%d%d%d",&dogum.gun,&dogum.ay,&dogum.yil);
printf("bugunun tarihini girin ");scanf("%d%d%d",&bugun.gun,&bugun.ay,&bugun.yil);

if(bugun.gun<dogum.gun){
	bugun.gun = bugun.gun + 30;
	bugun.ay = bugun.ay-1;
}
    if (bugun.ay<dogum.ay){
	bugun.ay = bugun.ay + 12;
	bugun.yil = bugun.yil - 1; 	
}
printf("yasadigin zaman | gun : %d , ay : %d , yil : %d",bugun.gun-dogum.gun,bugun.ay-dogum.ay,bugun.yil-dogum.yil); 

	return 0;
}
