#include <stdio.h>

//NORMAL Vectors
double x_normal[125]={0.146978,0.101186,0.0208742,-0.0629667,-0.129415,-0.15339,-0.129419,-0.17188,-0.0629632,0.110832,0.0208696,-0.106762,0.101184,0.145553,0.146979,0.425304,0.424957,0.291905,0.292483,0.0599893,0.0603975,-0.181487,-0.181951,-0.374072,-0.374086,-0.443759,-0.443765,-0.37418,-0.374037,-0.181163,-0.182136,0.0600409,0.0603715,0.292214,0.292335,0.424982,0.425132,0.654949, 0.654472,0.449997,0.450747,0.0928077,0.0932928,-0.280266,-0.280711,-0.576052,-0.576092,-0.683534,-0.683541,-0.57619,-0.576002,-0.279837,-0.281047,0.0928759,0.0932298,0.450402,0.450443,0.654523,0.65477,0.825831,0.825501,0.568642,0.569184,0.117792,0.118165,-0.354837,-0.355218,-0.726699,-0.726736,-0.862023,-0.862027,-0.726788,-0.726662,-0.35456,-0.355453,0.117837,0.118129,0.568901,0.568979,0.825562,0.825734,0.926849,0.926743,0.639382,0.639569,0.132894,0.133046,-0.399561,-0.399786,-0.815979,-0.815979,-0.967564,-0.967564,-0.816003,-0.815962,-0.399486,-0.399855,0.132904,0.133038,0.639443,0.63952,0.926784,0.926807,0.957891,0.957891,0.661221,0.661216,0.137613,0.137605,-0.413461,-0.413465,-0.843439,-0.843441,-1,-1,-0.843439,-0.843445,-0.413461,-0.413468,0.137614,0.137606,0.661221,0.661221,0.957891,0.957893};

double y_normal[125]={0.0437754,0.115379,0.152508,0.140237,0.0823123,4.52E-06,-0.0823026,0.17188,-0.140235,-0.110832,-0.152507,0.106762,-0.115378,-0.145553,-0.0437652,0.126658,0.126907,0.33285,0.332821,0.438283,0.438521,0.404217,0.403339,0.237909,0.23807,0,6.98E-06,-0.237978,-0.238036,-0.403496,-0.403728,-0.43866,-0.438318,-0.333203,-0.332631,-0.126558,-0.12695,0.19558, 0.195833,0.512036,0.512078,0.673827,0.674185,0.621279,0.62009,0.366598,0.366797,0,8.34E-06,-0.366686,-0.366717,-0.620328,-0.620767,-0.674322,-0.673841,-0.512496,-0.51175,-0.195449,-0.195935,0.247116,0.247334,0.646021,0.646025,0.851238,0.85149,0.7838,0.782944,0.462682,0.46284,0,0,-0.462745,-0.46278,-0.783187,-0.783472,-0.851557,-0.85123,-0.646315,-0.645775,-0.247032,-0.247383,0.277688,0.277796,0.725688,0.725635,0.957623,0.957674,0.88067,0.880398,0.519683,0.51973,0,0,-0.519692,-0.51971,-0.880527,-0.880541,-0.957701,-0.957606,-0.725758,-0.725571,-0.277666,-0.277805,0.287133,0.287131,0.750192,0.750195,0.990486,0.990487,0.910522,0.91052,0.537226,0.537222,0,0,-0.537226,-0.537215,-0.910522,-0.910519,-0.990486,-0.990487,-0.750192,-0.750192,-0.287131,-0.287125};

double z_normal[125]={-0.988171,-0.988154,-0.988082,-0.988114,-0.988168,-9.88E-01,-0.988169,0.970007,-0.988114,-0.98764,-0.988082,0.988536,-0.988155,-0.978585,-0.988171,-0.896144,-0.896274,-0.896662,-0.896484,-0.896833,-0.896689,-0.896477,-0.896778,-0.896365,-0.896316,-0.896146,-8.96E-01,-0.896301,-0.896345,-0.896868,-0.896565, -0.896645,-0.89679,-0.89643,-0.896603,-0.896311,-0.896184,-0.729925,-0.730285,-0.731657,-0.731166,-0.733037,-0.732647,-0.731754,-0.732591,-0.730596,-0.730464,-0.729919,-7.30E-01,-0.730442,-0.730575,-0.732724,-0.731888,-0.732574,-0.732971,-0.731086,-0.731583,-0.730342,-0.72999,-0.506889,-0.507321,-0.509219,-0.508606,-0.511389,-0.510884,-0.509655,-0.510704,-0.507773,-0.507576,-0.506869,-0.506862,-0.507588,-0.507738,-0.510789,-0.50973,-0.510847,-0.511325,-0.508555,-0.509154,-0.507369,-0.506918,-0.252668,-0.252937,-0.254101,-0.253783,-0.255533,-0.255262,-0.254501,-0.255088,-0.253197,-0.253098,-0.252627,-0.252627,-0.2531,-0.253194,-0.255113,-0.254487,-0.255234,-0.255524,-0.253747,-0.254087,-0.252931,-0.252693,0,-1.20E-05,0,0,0,-2.46E-06,0,-1.63E-05,0,5.47E-06,0,0,0,0,0,2.36E-05,0,1.77E-05,0,1.59E-06,-5.13E-06,0};

//Vertexes
double x_vertex[375]={60.0648,61.0294,55,57.527,60.0649,5.50E+01,54.1319,57.527,55,51.0406,54.1319,55,49.2226,51.0407,55,49.2226,49.2227,55,51.0406,49.2227,55,55,54.9999,54.1319,54.1319,51.0407,5.50E+01,54.9999,55,57.527,57.527,54.1319,54.9999,55,54.9999,60.0649,60.0648,57.527,55,54.9999,55,61.0294,61.0293,60.0649,54.9999,61.0294, 60.0649,64.4555,6.45E+01,66.2685,61.0293,60.0649,57.527,59.7081,59.708,64.4555,60.0648,57.527,54.1319,53.3835,53.3834,59.7081,57.527,54.1319,51.0407,47.6164,47.6164,53.3835,54.1319,51.0407,49.2227,44.2062,44.2061,47.6164,51.0406,49.2227,49.2227,44.2062,44.2061,44.2062,49.2226,49.2227,51.0407,47.6164,47.6164,44.2062,49.2226,51.0407,54.1319,53.3835,53.3834,47.6164,51.0406,54.1319,57.527,59.7081,59.708,53.3835,54.1319,57.527,60.0649,64.4555,64.4554,59.7081,5.75E+01,60.0649,61.0294,66.2685,6.63E+01,64.4555,6.01E+01,66.2685,6.45E+01,67.9673,67.9673,70.4664,66.2685,64.4555,5.97E+01,61.4469,6.14E+01,67.9673,6.45E+01,5.97E+01,53.3835,52.7873,52.7873,61.4469,59.708,53.3835,47.6164,44.8821,44.882,52.7873,53.3834,47.6164,44.2062,40.1888,40.1888,44.8821,47.6164,44.2062,44.2062,40.1888,40.1888,40.1888,44.2061,44.2062,47.6164,44.8821,44.882,40.1888,44.2061,47.6164,53.3835,52.7873,52.7873,44.8821,47.6164,53.3835,59.7081,61.4469,61.4468,52.7873,53.3834,59.7081,64.4555,67.9673,67.9673,61.4469,59.708,64.4555,66.2685,70.4664,70.4664,67.9673,64.4554,70.4664,67.9673,70.3968,70.3967,73.3734,70.4664,67.9673,61.4469,62.6478,62.6478,70.3968,67.9673,61.4469,52.7873,52.3757,52.3757,62.6478,61.4468,52.7873,44.8821,42.9922,42.9921,52.3757,52.7873,44.8821,40.1888,37.4075,37.4075,42.9922,44.882,40.1888,40.1888,37.4075,37.4075,37.4075,40.1888,40.1888,44.8821,42.9922,42.9921,37.4075,40.1888,44.8821,52.7873,52.3757,52.3757,42.9922,44.882,52.7873,61.4469,62.6478,62.6478,52.3757,52.7873,61.4469,67.9673,70.3968,70.3967,62.6478,61.4468,67.9673,70.4664,73.3734,73.3733,70.3968,67.9673,73.3734,70.3968,71.6166,71.6166,74.8331,73.3733,70.3968,62.6478,63.2505,63.2504,71.6166,70.3967,62.6478,52.3757,52.1691,52.1691,63.2505,62.6478,52.3757,42.9922,42.0434,42.0433,52.1691,52.3757,42.9922,37.4075,36.011,36.011,42.0434,42.9921,37.4075,37.4075,36.011,36.011,36.011,37.4075,37.4075,42.9922,42.0434,42.0433,36.011,37.4075,42.9922,52.3757,52.1691,52.1691,42.0434,42.9921,52.3757,62.6478,63.2505,63.2504,52.1691,52.3757,62.6478,70.3968,71.6166,71.6166,63.2505,62.6478,70.3968,73.3734,74.8331,74.833,71.6166,70.3967,74.8331,71.6166,71.6166,71.6166,74.8331,74.833,71.6166,63.2505,63.2505,63.2504,71.6166,71.6166,63.2505,52.1691,52.1691,52.1691,63.2505,63.2504,52.1691,42.0434,42.0434,42.0433,52.1691,52.1691,42.0434,36.011,36.011,36.011,42.0434,42.0433,36.011,36.011,36.011,36.011,36.011,36.011,36.011,42.0434,42.0434,42.0433,36.011,36.011,42.0434,52.1691,52.1691,52.1691,42.0434,42.0433,52.1691,63.2505,63.2505,63.2504,52.1691,52.1691,63.2505,71.6166,71.6166,71.6166,63.2505,63.2504,71.6166,74.8331,74.8331,74.833,71.6166,71.6166};

double y_vertex[375]={58.2387,55,55,60.4644,58.2387,5.50E+01,60.9291,60.4644,55,59.5411,60.9291,55,56.6827,59.5412,55,53.3171,56.6827,55,50.4586,53.3172,55,55,54.9999,49.0708,49.0708,50.4587,5.50E+01,54.9999,55,49.5355,49.5354,49.0708,54.9999,55,54.9999,51.7612,51.7611,49.5355,55,54.9999,55,55,55,51.7612,54.9999,55, 58.2387,61.0713,6.11E+01,55,55,58.2387,60.4644,65.2435,65.2434,61.0713,58.2387,60.4644,60.9291,66.1146,66.1146,65.2435,60.4644,60.9291,59.5412,63.513,63.513,66.1146,60.9291,59.5412,56.6827,58.1544,58.1543,63.513,59.5411,56.6827,53.3172,51.8455,51.8455,58.1544,56.6827,53.3172,50.4587,46.4869,46.4869,51.8455,53.3171,50.4587,49.0708,43.8853,43.8852,46.4869,50.4586,49.0708,49.5355,44.7564,44.7564,43.8853,49.0708,49.5355,51.7612,48.9286,48.9286,44.7564,4.95E+01,51.7612,55,55,5.50E+01,48.9286,5.18E+01,55,6.11E+01,63.3517,63.3516,55,55,61.0713,6.52E+01,69.0911,6.91E+01,63.3517,6.11E+01,6.52E+01,66.1146,70.2894,70.2893,69.0911,65.2434,66.1146,63.513,66.7106,66.7106,70.2894,66.1146,63.513,58.1544,59.3392,59.3391,66.7106,63.513,58.1544,51.8455,50.6606,50.6605,59.3392,58.1543,51.8455,46.4869,43.2893,43.2892,50.6606,51.8455,46.4869,43.8853,39.7105,39.7104,43.2893,46.4869,43.8853,44.7564,40.9088,40.9087,39.7105,43.8852,44.7564,48.9286,46.6482,46.6482,40.9088,44.7564,48.9286,55,55,55,46.6482,48.9286,55,63.3517,64.9351,64.935,55,55,63.3517,69.0911,71.7625,71.7624,64.9351,63.3516,69.0911,70.2894,73.188,73.188,71.7625,69.0911,70.2894,66.7106,68.9307,68.9307,73.188,70.2893,66.7106,59.3392,60.1619,60.1618,68.9307,66.7106,59.3392,50.6606,49.838,49.838,60.1619,59.3391,50.6606,43.2893,41.0691,41.069,49.838,50.6605,43.2893,39.7105,36.8119,36.8119,41.0691,43.2892,39.7105,40.9088,38.2374,38.2374,36.8119,39.7104,40.9088,46.6482,45.0648,45.0648,38.2374,40.9087,46.6482,55,55,55,45.0648,46.6482,55,64.9351,65.7304,65.7304,55,55,64.9351,71.7625,73.1043,73.1043,65.7304,64.935,71.7625,73.188,74.6439,74.6438,73.1043,71.7624,73.188,68.9307,70.0459,70.0458,74.6439,73.188,68.9307,60.1619,60.5751,60.575,70.0459,68.9307,60.1619,49.838,49.4248,49.4248,60.5751,60.1618,49.838,41.0691,39.954,39.9539,49.4248,49.838,41.0691,36.8119,35.356,35.3559,39.954,41.069,36.8119,38.2374,36.8956,36.8955,35.356,36.8119,38.2374,45.0648,44.2695,44.2695,36.8956,38.2374,45.0648,55,55,55,44.2695,45.0648,55,65.7304,65.7304,65.7304,54.9999,55,65.7304,73.1043,73.1043,73.1043,65.7304,65.7304,73.1043,74.6439,74.6439,74.6438,73.1043,73.1043,74.6439,70.0459,70.0459,70.0458,74.6439,74.6438,70.0459,60.5751,60.5751,60.575,70.0459,70.0458,60.5751,49.4248,49.4248,49.4248,60.5751,60.575,49.4248,39.954,39.954,39.9539,49.4248,49.4248,39.954,35.356,35.356,35.3559,39.954,39.9539,35.356,36.8956,36.8956,36.8955,35.356,35.3559,36.8956,44.2695,44.2695,44.2695,36.8956,36.8955,44.2695,55,54.9999,54.9999,44.2695,44.2695};

double z_vertex[375]={5.8968,5.8968,5,5.8968,5.8968,5.00E+00,5.8968,5.8968,5,5.8968,5.8968,5,5.8968,5.8968,5,5.8968,5.8968,5,5.8968,5.8968,5,5,5,5.8968,5.8968,5.8968,5.00E+00,5,5,5.8968,5.8968,5.8968,5,5,5,5.8968,5.8968,5.8968,5,5,5,5.8968,5.8968,5.8968,5,5.8968, 5.8968,8.3809,8.38E+00,8.3809,5.8968,5.8968,5.8968,8.3809,8.3809,8.3809,5.8968,5.8968,5.8968,8.3809,8.3809,8.3809,5.8968,5.8968,5.8968,8.3809,8.3809,8.3809,5.8968,5.8968,5.8968,8.3809,8.3809,8.3809,5.8968,5.8968,5.8968,8.3809,8.3809,8.3809,5.8968,5.8968,5.8968,8.3809,8.3809,8.3809,5.8968,5.8968,5.8968,8.3809,8.3809,8.3809,5.8968,5.8968,5.8968,8.3809,8.3809,8.3809,5.8968,5.8968,5.8968,8.3809,8.3809,8.3809,5.90E+00,5.8968,5.8968,8.3809,8.38E+00,8.3809,5.90E+00,8.3809,8.38E+00,12.143,12.1429,12.143,8.3809,8.3809,8.38E+00,12.143,1.21E+01,12.143,8.38E+00,8.38E+00,8.3809,12.143,12.1429,12.143,8.3809,8.3809,8.3809,12.143,12.1429,12.143,8.3809,8.3809,8.3809,12.143,12.1429,12.143,8.3809,8.3809,8.3809,12.143,12.1429,12.143,8.3809,8.3809,8.3809,12.143,12.1429,12.143,8.3809,8.3809,8.3809,12.143,12.1429,12.143,8.3809,8.3809,8.3809,12.143,12.1429,12.143,8.3809,8.3809,8.3809,12.143,12.1429,12.143,8.3809,8.3809,8.3809,12.143,12.1429,12.143,8.3809,12.143,12.143,16.8731,16.8731,16.8731,12.1429,12.143,12.143,16.8731,16.8731,16.8731,12.1429,12.143,12.143,16.8731,16.8731,16.8731,12.1429,12.143,12.143,16.8731,16.8731,16.8731,12.1429,12.143,12.143,16.8731,16.8731,16.8731,12.1429,12.143,12.143,16.8731,16.8731,16.8731,12.1429,12.143,12.143,16.8731,16.8731,16.8731,12.1429,12.143,12.143,16.8731,16.8731,16.8731,12.1429,12.143,12.143,16.8731,16.8731,16.8731,12.1429,12.143,12.143,16.8731,16.8731,16.8731,12.1429,12.143,12.143,16.8731,16.8731,16.8731,12.1429,16.8731,16.8731,22.2217,22.2217,22.2217,16.8731,16.8731,16.8731,22.2217,22.2217,22.2217,16.8731,16.8731,16.8731,22.2217,22.2217,22.2217,16.8731,16.8731,16.8731,22.2217,22.2217,22.2217,16.8731,16.8731,16.8731,22.2217,22.2217,22.2217,16.8731,16.8731,16.8731,22.2217,22.2217,22.2217,16.8731,16.8731,16.8731,22.2217,22.2217,22.2217,16.8731,16.8731,16.8731,22.2217,22.2217,22.2217,16.8731,16.8731,16.8731,22.2217,22.2217,22.2217,16.8731,16.8731,16.8731,22.2217,22.2217,22.2217,16.8731,16.8731,16.8731,22.2217,22.2217,22.2217,16.8731,22.2217,22.2217,27.7782,27.7782,27.7782,22.2217,22.2217,22.2217,27.7782,27.7782,27.7782,22.2217,22.2217,22.2217,27.7782,27.7782,27.7782,22.2217,22.2217,22.2217,27.7782,27.7782,27.7782,22.2217,22.2217,22.2217,27.7782,27.7782,27.7782,22.2217,22.2217,22.2217,27.7782,27.7782,27.7782,22.2217,22.2217,22.2217,27.7782,27.7782,27.7782,22.2217,22.2217,22.2217,27.7782,27.7782,27.7782,22.2217,22.2217,22.2217,27.7782,27.7782,27.7782,22.2217,22.2217,22.2217,27.7782,27.7782,27.7782,22.2217,22.2217,22.2217,27.7782,27.7782,27.7782,22.2217};




int main(){
  int i;
  int normal=0;
  int vertex=0;
  double x_spacing=70;
  double y_spacing=70;
  printf("solid dot\n");
  for(i=0;i<125;i++){
    printf("facet normal ");
    printf("%lf %lf %lf\n",x_normal[normal],y_normal[normal],z_normal[normal]);
    normal++;
    printf("outer loop\n");
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex],y_vertex[vertex],z_vertex[vertex]);
    vertex++;
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex],y_vertex[vertex],z_vertex[vertex]);
    vertex++;
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex],y_vertex[vertex],z_vertex[vertex]);
    vertex++;
    printf("endloop\n");
    printf("endfacet\n");
  }
  printf("endsolid\n");
  normal=0;
  vertex=0;

  printf("solid dot\n");
  for(i=0;i<125;i++){
    printf("facet normal ");
    printf("%lf %lf %lf\n",x_normal[normal],y_normal[normal],z_normal[normal]);
    normal++;
    printf("outer loop\n");
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex]+x_spacing,y_vertex[vertex],z_vertex[vertex]);
    vertex++;
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex]+x_spacing,y_vertex[vertex],z_vertex[vertex]);
    vertex++;
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex]+x_spacing,y_vertex[vertex],z_vertex[vertex]);
    vertex++;
    printf("endloop\n");
    printf("endfacet\n");
  }
  printf("endsolid\n");

  normal=0;
  vertex=0;


  printf("solid dot\n");
  for(i=0;i<125;i++){
    printf("facet normal ");
    printf("%lf %lf %lf\n",x_normal[normal],y_normal[normal],z_normal[normal]);
    normal++;
    printf("outer loop\n");
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex],y_vertex[vertex]+y_spacing,z_vertex[vertex]);
    vertex++;
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex],y_vertex[vertex]+y_spacing,z_vertex[vertex]);
    vertex++;
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex],y_vertex[vertex]+y_spacing,z_vertex[vertex]);
    vertex++;
    printf("endloop\n");
    printf("endfacet\n");
  }
  printf("endsolid\n");

  normal=0;
  vertex=0;


  printf("solid dot\n");
  for(i=0;i<125;i++){
    printf("facet normal ");
    printf("%lf %lf %lf\n",x_normal[normal],y_normal[normal],z_normal[normal]);
    normal++;
    printf("outer loop\n");
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex]+x_spacing,y_vertex[vertex]+y_spacing,z_vertex[vertex]);
    vertex++;
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex]+x_spacing,y_vertex[vertex]+y_spacing,z_vertex[vertex]);
    vertex++;
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex]+x_spacing,y_vertex[vertex]+y_spacing,z_vertex[vertex]);
    vertex++;
    printf("endloop\n");
    printf("endfacet\n");
  }
  printf("endsolid\n");

  normal=0;
  vertex=0;


  printf("solid dot\n");
  for(i=0;i<125;i++){
    printf("facet normal ");
    printf("%lf %lf %lf\n",x_normal[normal],y_normal[normal],z_normal[normal]);
    normal++;
    printf("outer loop\n");
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex],y_vertex[vertex]+2*y_spacing,z_vertex[vertex]);
    vertex++;
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex],y_vertex[vertex]+2*y_spacing,z_vertex[vertex]);
    vertex++;
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex],y_vertex[vertex]+2*y_spacing,z_vertex[vertex]);
    vertex++;
    printf("endloop\n");
    printf("endfacet\n");
  }
  printf("endsolid\n");

  normal=0;
  vertex=0;


  printf("solid dot\n");
  for(i=0;i<125;i++){
    printf("facet normal ");
    printf("%lf %lf %lf\n",x_normal[normal],y_normal[normal],z_normal[normal]);
    normal++;
    printf("outer loop\n");
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex]+x_spacing,y_vertex[vertex]+2*y_spacing,z_vertex[vertex]);
    vertex++;
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex]+x_spacing,y_vertex[vertex]+2*y_spacing,z_vertex[vertex]);
    vertex++;
    printf("vertex ");
    printf("%lf %lf %lf\n",x_vertex[vertex]+x_spacing,y_vertex[vertex]+2*y_spacing,z_vertex[vertex]);
    vertex++;
    printf("endloop\n");
    printf("endfacet\n");
  }
  printf("endsolid\n");



  return 0;
}