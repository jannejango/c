/*
	ファイルを作成したり、削除したりするサンプル
	Create: 2014/01/19
*/
#include <stdio.h>

void main(){
	// sample.1 作成、削除
	FILE *fp;
	fp=fopen("tmp1", "w");
	fprintf(fp, "This file is tmp1.\n");
	fclose(fp);
	remove("tmp1");
}
