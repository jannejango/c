//  1  HUP         端末との接続が切断された（Hangup）ことによるプロセスの終了
//  2  INT  Ctrl-c キーボードからの割り込み（Interrrupt）によるプロセスの終了
//  3  QUIT Ctrl-\ キーボードからのプロセスの中止（Quit）
//  9  KILL        Killシグナルによるプロセスの終了（killed）
//  15 TERM        終了（Termination）シグナルによるプロセスの終了
//  20 TSTP Ctrl-z 端末からの中断シグナル（Terminal SToP）。jobs,fg,bgで確認/再開
//  -  EOF  Ctrl-d （参考）シグナルではない。標準入力にEOFを入力
#include <stdio.h>
#include <signal.h>

//  1  HUP         端末との接続が切断された（Hangup）ことによるプロセスの終了
void sighup_handler(){
	printf("Catch SIGHUP\n");
}

//  2  INT  Ctrl-c キーボードからの割り込み（Interrrupt）によるプロセスの終了
void sigint_handler(){
	printf("Catch SIGINT\n");
}

//  3  QUIT Ctrl-\ キーボードからのプロセスの中止（Quit）
void sigquit_handler(){
	printf("Catch SIGQUIT\n");
}

//  9  KILL        Killシグナルによるプロセスの終了（killed）
//                 ※キャッチしたり無視したりすることは不可
//                  そのため、下記関数が呼ばれることは無い
void sigkill_handler(){
	printf("Catch SIGKILL\n");
}

void main(){
	// シグナルごとにハンドラ関数を登録可能
	signal(SIGHUP, sighup_handler);
	signal(SIGINT, sigint_handler);
	signal(SIGQUIT, sigquit_handler);

	while(1){
		printf("loop.\n");
		sleep(1);
	}
}
