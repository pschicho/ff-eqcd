#ifndef PARAMS_H
#define PARAMS_H



/************simulation params**********************/
double		b=97.994833;
double 		y=-0.098685538;
double 		x=0.0030211678;



/************Wilson line params*********************/
double 			Zw=0.25083268;

#define			number_barriers 4
#define			number_rs 4
#define			number_ls 8

const int		nr[number_rs]={6,9,12,18};
const int		nl[number_ls]={4,8,12,16,24,32,40,48};



/************number of trajectories*****************/
int 			trajectories=1000000;



/************number of updates**********************/
int 			nhb=1;
int 			nor=4;
int			ntherm=60;

int			nr_ML_upds=80;









#endif
