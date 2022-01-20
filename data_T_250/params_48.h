#ifndef PARAMS_H
#define PARAMS_H



/************simulation params**********************/
double		b=49.994833;
double 		y=-0.21001555;
double 		x=0.011291868;



/************Wilson line params*********************/
double 			Zw=0.35590468;

#define			number_barriers 4
#define			number_rs 4
#define			number_ls 11

const int		nr[number_rs]={6,9,12,18};
const int		nl[number_ls]={4,6,8,12,16,20,24,28,32,36,40};



/************number of trajectories*****************/
int 			trajectories=1000000;



/************number of updates**********************/
int 			nhb=1;
int 			nor=4;
int			ntherm=50;

int			nr_ML_upds=80;









#endif
