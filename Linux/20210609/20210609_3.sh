#!/bin/bash

for (( i = 0; i < 30; i++))
do
    TEAM=$(((RANDOM%32)+1))
    echo $TEAM
done