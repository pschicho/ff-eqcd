#ifndef PARAMS_H
#define PARAMS_H



/************simulation params**********************/
double		b=193.994833;
double 		y=-0.053961604;
double 		x=0.0027931721;



/************Wilson line params*********************/
double 			Zw=0.17707134;

#define			number_barriers 4
#define			number_rs 4
#define			number_ls 5

const int		nr[number_rs]={6,9,12,18};
const int		nl[number_ls]={4,8,16,24,32};



/************number of trajectories*****************/
int 			trajectories=1000000;



/************number of updates**********************/
int 			nhb=1;
int 			nor=4;
int			ntherm=70;

int			nr_ML_upds=80;









#endif
