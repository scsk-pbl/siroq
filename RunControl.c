//RunControl.c
#include "RunControl.h"
#include "ev3api.h"

//直進
void forward(int left_motor, int right_motor, int speed){

	//**************************************************
	//演習問題1：ここにコードを追加してください


	//**************************************************

}

//モータ停止
void stop(int left_motor, int right_motor){
    ev3_motor_stop(left_motor, false);
	ev3_motor_stop(right_motor, false);
}