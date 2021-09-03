#include "Splender.h"

int main(){
    Splender splender;

    while(!splender.getEndGoal()){
        splender.makeTurn();
    }
    
    return 1;
}
