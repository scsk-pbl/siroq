//ColorDetection.c
#include "ColorDetection.h"
#include "ev3api.h"

#define REFLECT_WHITE	95      //白検出用反射光の閾値
#define REFLECT_BLACK	30      //黒検出用反射光の閾値
#define REFLECT_RED		48      //赤検出用反射光の閾値

//色検出
int DetectionColor(int color_sensor){

    int reflect = 0;            //反射光の値
    int color = 0;              //検出色

#if 0
    //カラーセンサで反射光の強さを測定
    reflect = 
    printf("reflect = %d\n", reflect);

    if(							){
        //白
        
    }else if(							){
        //黒
        
    }else{
        //赤
        
    }
#endif

    return color;
}