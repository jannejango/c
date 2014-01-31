/*
 * SIGHUP(Ctrl-c)をハンドルする
 * ハンドルしたときにメッセージを表示する
 */
#include <stdio.h>
#include <signal.h>

// ハンドラ関数の戻り値はvoid型
void handler(){
	printf(" Catch SIGINT\n");
}

void main(){
	signal(SIGINT, handler);

	while(1){
		printf("loop.\n");
		sleep(1);
	}
}
