/*
 * SIGINT(Ctrl-c)を無視してループし続ける
 * Ctrl-dとかで止めてちょ。
 */

#include <stdio.h>
#include <signal.h>

void main(){
	// signal(シグナルの種類, ハンドラ)
	// ハンドラには
	//   SIG_IGN : 無視
	//   SIG_DFL : デフォルト動作
	// に加えて、ハンドラする関数を指定可能。
	signal(SIGINT, SIG_IGN);

	while(1){
		printf("loop.\n");
		sleep(1);
	}
}
