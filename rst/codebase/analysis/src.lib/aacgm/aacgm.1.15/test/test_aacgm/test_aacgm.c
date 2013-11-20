/* LICENSE AND DISCLAIMER
 
 Copyright (c) 2013 Virginia Tech
 
 This file is part of the Radar Software Toolkit (RST).
 
 RST is free software: you can redistribute it and/or modify
 it under the terms of the GNU Lesser General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 any later version.
 
 RST is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public License
 along with RST.  If not, see <http://www.gnu.org/licenses/>.

*/

#include <stdio.h>
#include <stdlib.h>
#include "aacgm.h"


int main(int argc,char *argv[]){
    int i,s;
    double mlat, mlon, h;
    for(i=0; i<20;i++){
        AACGMInit(i+1990);
        s = AACGMConvert(50., 60., 300., &mlat, &mlon, &h, 0);
        fprintf(stderr,"year: %d  mlat: %lf  mlon: %lf  height: %lf\n", i+1990, mlat, mlon, h);
    }

    return 0;
}



