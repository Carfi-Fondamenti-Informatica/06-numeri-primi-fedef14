
#include "lib.h"

bool numeriprimi(int d, int a){
if(d==1){
return true;
} else if(n%d==0){
return false;
} else{
numeriprimi(--d, a);
}

}
