#ifndef PARAMS_H
#define PARAMS_H



/************simulation params**********************/
double		b=25.994833;
double 		y=-0.35876702;
double 		x=0.013264025;



/************Wilson line params*********************/
double 			Zw=0.50662863;

#define			number_barriers 4
#define			number_rs 4
#define			number_ls 9

const int		nr[number_rs]={6,9,12,18};
const int		nl[number_ls]={4,6,8,10,12,14,16,18,20};



/************number of trajectories*****************/
int 			trajectories=1000000;



/************number of updates**********************/
int 			nhb=1;
int 			nor=4;
int			ntherm=40;

int			nr_ML_upds=80;









#endif
