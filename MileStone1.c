#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <unistd.h>

/*
This is the milestone 1 of this game, in c language with enhanced gmaming experiment,that is, a piece of junk game wtf
*/

//init game characteristic 
int blood, manpower, Tobacco_oil, coin, massif; //team element
char teamname1[] = "顶针";
char teamname2[] = "王源";
char teamname_extra[200];

int blood_p, fight_power, armor, strength, hunger; //team_leader_element

void init_system();
void fight_sys();
void teams_config(int a);
void teams(int *blood, int *manpower, int *Tobacco_oil, int *coin, int *massif);
void shop();
void work();
void opium_den();
void rander();

void delayprintf(char *input[]);

void init_system(){
    printf("你好，我是阿弥诺斯帝国第一啊巴什\n");
    sleep(1);
    printf("我不会告诉你任何事情哼哼哼啊啊啊啊\n");
    printf("请选择你的牛魔\n");
    sleep(1);
    printf("【1】王源中华王\n");
    sleep(1);
    printf("【2】理塘顶针王\n");
    sleep(1);
    printf("【3】组建我们自己的阿弥诺斯团队\n");
    do{
        int a;
        scanf("%d",&d);
        teams_config(a);
    } 
    while(!(a == 1 || a == 2 || a == 3))
    sleep(1);
    printf("准备好战斗吧，李时珍的牛皮\n");
    printf("三天之内撒了你\n");
}

void teams_config(int a, ){
    if(a == 1){
        printf("你选择了保守派王源中华香烟大队！");
    }
    else if (a == 2){
        printf("你选择创新派顶真悦刻5电子烟大队");
    }
    else if (a == 3){
        printf("请为自己的一得阁拉米创个名字");
        
    }
}

int main(void){

}



