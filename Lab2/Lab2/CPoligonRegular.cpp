#include <cmath>
#include "CPOLIGONREGULAR_H.h"


int CPoligonoRegular::getLados(){return lados;}
float CPoligonoRegular::getComprimento(){return comprimento;}
float CPoligonoRegular::area(){return (1/4)*lados*comprimento*comprimento * (cos(M_PI/lados)/sin(M_PI/lados)); }
