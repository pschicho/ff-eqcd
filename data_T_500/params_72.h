#ifndef PARAMS_H
#define PARAMS_H



/************simulation params**********************/
double		b=73.994833;
double 		y=-0.13629041;
double 		x=0.0057952844;



/************Wilson line params*********************/
double 			Zw=0.28995643;

#define			number_barriers 4
#define			number_rs 4
#define			number_ls 8

const int		nr[number_rs]={6,9,12,18};
const int		nl[number_ls]={6,9,12,18,24,30,36,42};



/************number of trajectories*****************/
int 			trajectories=1000000;



/************number of updates**********************/
int 			nhb=1;
int 			nor=4;
int			ntherm=50;

int			nr_ML_upds=80;









#endif
