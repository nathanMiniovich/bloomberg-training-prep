#!/bin/bash

function test(){
    cd $1
    make &> /dev/null
    ./problem_set
    make clean &> /dev/null
    cd ..
}

test C02
test C04
test C06
test C07
test C09
test C11
#test C12
#test C14
#test C15
