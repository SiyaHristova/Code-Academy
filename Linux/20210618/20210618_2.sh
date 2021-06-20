/*Направете двумерен масив 5 на 5, запълнете го с рандом
стойности и го отпечатайте на екрана.*/

#!/bin/bash
declare -A matrix
rows=5
cols=5

for ((i=0;i<rows;i++))
do
    for ((j=0;j<cols;j++))
    do
        matrix[$i,$j]=$RANDOM
    done
done

for ((i=0;i<rows;i++))
do
    for ((j=0;j<cols;j++))
    do
        echo matrix[$i,$j] = $(matrix[$i,$j])
    done
done
