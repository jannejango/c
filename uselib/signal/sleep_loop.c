/*
 * sleep()関数のテスト
 * １分ごとに現在時刻を表示する。
 */
#include <stdio.h>
#include <time.h>

void main(){
	int i;
	time_t timer; // long int型
	struct tm *local; //年月日時分秒
	for(i=0;;i++){
		if(i%60==0){
			timer=time(NULL); // system call 'time()'. 現在時刻を1970年からの積算秒数で取得。
			local=localtime(&timer); // 年月日時分秒の構造体に格納。
			printf("%02d:%02d:%02d\n", local->tm_hour, local->tm_min, local->tm_sec);
		}
		sleep(1);
	}
	return;
}

